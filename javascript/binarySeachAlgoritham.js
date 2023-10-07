function binarySearch(sortedArray, key) {
    let start = 0;
    let end = sortedArray.length - 1;

    while (start <= end) {
        let middle = Math.floor((start + end) / 2);

        if (sortedArray[middle] === key) {
            // found the key
            return middle;
        } else if (sortedArray[middle] < key) {
            // Search to the right of the array
            start = middle + 1;
        } else {
            //Search to the left of the array
            end = middle - 1;
        }
    }
    // key not found
    return -1;
}

const sortedArray = [2, 4, 5, 7, 9, 11];
const key = 9;
const keyAt = binarySearch(sortedArray, key);

if (keyAt < 0) {
    console.log(`Key not found.`);
} else {
    console.log(`Found Key :: ${key} at index :: ${keyAt}`);
}
