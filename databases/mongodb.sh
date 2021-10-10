#**************************************************
# MONGODB QUERY
#**************************************************

show dbs # To show all the database

use <DATABASE_NAME> # To select the required database

# Insert the document in the collection
db.<COLLECTION_NAME>.insertOne({            
"_id": ObjectId("5f87d46607c51425a809f825"),
"name": "Demo User"
"courses": 5,
"email": "demo@gmail.com"
})

# To display all the document in well defined format
db.<COLLECTION_NAME>.find().pretty();

# To display the document where name is equal to Demo User
db.<COLLECTION_NAME>.findOne({name: "Demo User"});

# To display all the document with name and email [1: select, 0: unselect]
db.<COLLECTION_NAME>.find({}, {name: 1, email: 1, _id: 0});

# To display all the document with name in ascending order [1: ascending order, -1: descending order]
db.<COLLECTION_NAME>.find().sort({name: 1});

# Update the document with _id: 5f87d46607c51425a809f825 and set the role: 1
db.<COLLECTION_NAME>.updateOne({_id: ObjectId("5f87d46607c51425a809f825")}, {$set: {role: 1}})

# Create Index on course field with the name courseIndex
db.users.createIndex({"course": 1}, {name: "courseIndex"});