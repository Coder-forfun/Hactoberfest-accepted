// Bubble sort

#include <iostream>

void swap(int &xp, int &yp)
{
    int temp = xp;
    xp = yp;
    yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        bool noSwaps = true;

        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                noSwaps = false;
            }
        }

        if (noSwaps) break; // Already sorted
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Entry Point
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    std::cout << "Sorted array: \n";
    printArray(arr, n);

    return 0;
}
