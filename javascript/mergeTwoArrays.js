// program to merge and remove duplicate value from an array

function getMergedArray(arr1, arr2){

    // merge two arrays
    let arr = arr1.concat(arr2);
    let mergedArr = [];

    // loop through array
    for(let i of arr) {
        if(mergedArr.indexOf(i) === -1) {
            mergedArr.push(i);
        }
    }
    return mergedArr;
}

const array1 = [1, 2, 3,2,1,8,5,1,9,13];
const array2 = [2, 3, 5,5,9,3,8,6,99,32];

// calling the function
let returnedArr=getMergedArray(array1, array2);
console.log(returnedArr)