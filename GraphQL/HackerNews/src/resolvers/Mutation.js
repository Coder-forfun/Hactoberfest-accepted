const bcrypt = require("bcryptjs");
const jwt = require("jsonwebtoken");
const { APP_SECRET, getUserId } = require("../utils");

exports.post = (parent, args, context) => {
  const { userId } = context;
  const newLink = context.prisma.link.create({
    data: {
      url: args.url,
      description: args.description,
      postedBy: { connect: { id: userId } },
    },
  });
  context.pubsub.publish("NEW_LINK", newLink);
  return newLink;
};

exports.updateLink = (parent, args, context) => {
  const newLink = context.prisma.link.update({
    where: {
      id: parseInt(args.id),
    },
    data: {
      url: args.url,
      description: args.description,
    },
  });
  return newLink;
};

exports.deleteLink = (parent, args, context) => {
  link = context.prisma.link.delete({
    where: {
      id: parseInt(args.id),
    },
  });
  return link;
};

exports.signup = async (parent, args, context, info) => {
  const password = await bcrypt.hash(args.password, 10);

  const user = await context.prisma.user.create({
    data: {
      ...args,
      password,
    },
  });

  const token = jwt.sign({ userId: user.id }, APP_SECRET);

  return {
    token,
    user,
  };
};

exports.login = async (parent, args, context, info) => {
  const user = await context.prisma.user.findUnique({
    where: {
      email: args.email,
    },
  });
  if (!user) {
    throw new Error("No such user found");
  }
  const valid = await bcrypt.compare(args.password, user.password);
  if (!valid) {
    throw new Error("Invalid password");
  }
  const token = jwt.sign({ userId: user.id }, APP_SECRET);

  return {
    token,
    user,
  };
};

exports.vote = async (parent, args, context, info) => {
  const userId = getUserId(context);

  const vote = await context.prisma.vote.findUnique({
    where: {
      linkId_userId: {
        linkId: Number(args.linkId),
        userId,
      },
    },
  });

  if (Boolean(vote)) {
    throw new Error(`You alredy voted for link: ${args.linkId}`);
  }

  const newVote = context.prisma.vote.create({
    data: {
      user: { connect: { id: userId } },
      link: { connect: { id: Number(args.linkId) } },
    },
  });
  context.pubsub.publish("NEW_VOTE", newVote);

  return newVote;
};
