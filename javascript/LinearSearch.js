/**
 * @param {Array}
 * @param {String}
 * */
const linearSearch = (arr, elToFind) => {
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] == elToFind) {
      return i;
    }
  }
  return null;
};

// Usage
let rainbow = ["red", "orange", "yellow", "green", "blue", "indigo", "violet"];

console.log(linearSearch(rainbow, "green")); // returns 3
console.log(linearSearch(rainbow, "white")); // returns null
