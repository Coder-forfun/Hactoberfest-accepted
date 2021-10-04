// Quick sort in C++

#include <iostream>
using namespace std;

// Swap Two Elements
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// Print the Array
void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

//rearrange array 
int partition(int array[], int low, int high) {
    
  // rightmost element as pivot
  int pivot = array[high];
  
  // pointer for greater element
  int i = (low - 1);

  /*traverse each element of the array compare them with the pivot */
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) { 
      i++; // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      swap(&array[i], &array[j]);
    }
  }
  
  // swap pivot with the greater element at i
  swap(&array[i + 1], &array[high]);
  
  // return the partition point
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {

    int pi = partition(array, low, high);

    // recursive call on the left of pivot
    quickSort(array, low, pi - 1);

    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
  }
}

// Driver code
int main() {
  int data[] = {2,4,6,1,8,20,5};
  int n = sizeof(data) / sizeof(data[0]);
  
  cout << "Unsorted Array: \n";
  printArray(data, n);

  quickSort(data, 0, n - 1);
  
  cout << "Sorted array in ascending order: \n";
  printArray(data, n);
}

//Done By Atishi Jain