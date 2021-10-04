exports.link = (parent, args, context) => {
  return context.prisma.vote
    .findUnique({
      where: {
        id: parent.id,
      },
    })
    .link();
};

exports.user = (parent, args, context) => {
  return context.prisma.vote
    .findUnique({
      where: {
        id: parent.id,
      },
    })
    .user();
};
