/**
 * It builds a dictionary based on key-value from array of objects.
 * 
 */

const myObjects = [
    { "id": 1, "code": "A001", "name": "John Doe", "value": 53 },
    { "id": 2, "code": "A002", "name": "Jane Doe", "value": 86 }
]
let myDictionary = {}

function addElementsToDict(collection, dictionary, key) {

    for (element of collection) {

        if (!dictionary[element[key]]) {
            dictionary[element[key]] = element
        }
    }
}

addElementsToDict(myObjects, myDictionary, "code")
console.log(myDictionary)