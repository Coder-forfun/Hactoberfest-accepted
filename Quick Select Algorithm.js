function pivot(arr, start, end) {
  let pivotIndex = start;
  for (let i = start + 1; i <= end; i++) {
    if (arr[i] < arr[start]) {
      pivotIndex++;
      let temp = arr[pivotIndex];
      arr[pivotIndex] = arr[i];
      arr[i] = temp;
    }
  }
  let temp = arr[start];
  arr[start] = arr[pivotIndex];
  arr[pivotIndex] = temp;
  return pivotIndex;
}

function quickSelect(arr, k, start = 0, end = arr.length - 1) {
  const pivotIndex = pivot(arr, start, end);
  if (k === pivotIndex) return arr[pivotIndex];
  else if (k < pivotIndex) return quickSelect(arr, k, start, pivotIndex - 1);
  else return quickSelect(arr, k, pivotIndex + 1, end);
}

// prints the kth smallest element using quick select algorithm
console.log(quickSelect([5, 3, 1, 6, 4, 2], 2));
