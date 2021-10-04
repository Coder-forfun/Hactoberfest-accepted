const { ApolloServer, gql } = require("apollo-server");
const { PrismaClient } = require("@prisma/client");
const fs = require("fs");
const path = require("path");
const Query = require("./resolvers/Query");
const Mutation = require("./resolvers/Mutation");
const Link = require("./resolvers/Link");
const User = require("./resolvers/User");
const Subscription = require("./resolvers/Subscription");
const Vote = require("./resolvers/Vote");
const { getUserId } = require("./utils");

const { PubSub } = require("apollo-server");

const pubsub = new PubSub();
//instanciated prisma
const prisma = new PrismaClient();

const resolvers = {
  Query,
  Mutation,
  Subscription,
  User,
  Link,
  Vote,
};

const server = new ApolloServer({
  typeDefs: fs.readFileSync(path.join(__dirname, "schema.graphql"), "utf8"),
  resolvers,
  context: ({ req }) => {
    return {
      ...req,
      prisma,
      userId: req && req.headers.authorization ? getUserId(req) : null,
      pubsub,
    };
  },
});

server.listen().then(({ url }) => {
  console.log(`Server is running on port ${url}`);
});
