-- CreateTable
CREATE TABLE "Vote" (
    "id" INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
    "linkId" INTEGER NOT NULL,
    "userId" INTEGER NOT NULL,
    FOREIGN KEY ("linkId") REFERENCES "Link" ("id") ON DELETE CASCADE ON UPDATE CASCADE,
    FOREIGN KEY ("userId") REFERENCES "User" ("id") ON DELETE CASCADE ON UPDATE CASCADE
);

-- CreateIndex
CREATE UNIQUE INDEX "Vote.linkId_userId_unique" ON "Vote"("linkId", "userId");
