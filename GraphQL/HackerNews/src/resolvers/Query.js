exports.feed = async (parent, args, context) => {
  return context.prisma.link.findMany();
};

exports.getLink = (parent, args, context) => {
  let link = context.prisma.link.findUnique({
    where: {
      id: parseInt(args.id),
    },
  });
  return link;
};

exports.info = () => `some string`;
