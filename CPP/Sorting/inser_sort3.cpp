#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int pos = 1; pos < n; pos++)
    {
        int nextPos = pos;
        while (nextPos > 0 && (arr[nextPos] < arr[nextPos - 1]))
        {
            int temp = arr[nextPos];
            arr[nextPos] = arr[nextPos - 1];
            arr[nextPos - 1] = temp;
            nextPos = nextPos - 1;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}