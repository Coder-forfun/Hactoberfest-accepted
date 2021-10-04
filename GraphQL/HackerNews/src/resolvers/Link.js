exports.postedBy = (parent, args, context) => {
  return context.prisma.link
    .findUnique({
      where: {
        id: parent.id,
      },
    })
    .postedBy();
};

exports.votes = (parent, args, context) => {
  return context.prisma.link
    .findUnique({
      where: {
        id: parent.id,
      },
    })
    .votes();
};
