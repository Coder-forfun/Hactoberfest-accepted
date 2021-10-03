// Bubble Sort 

// Bubble sort is a simple sorting algorithm. This sorting algorithm is 
// comparison-based algorithm in which each pair of adjacent elements is 
// compared and the elements are swapped if they are not in order.

// This algorithm is not suitable for large data sets as its 
// average and worst case complexity are of Ο(n^2) where n is the number of items.

#include<iostream>
using namespace std;
int main()
{
    int n, i, arr[50], j, temp;
    cout<<"Enter the Size (max. 50): ";
    cin>>n;
    cout<<"Enter "<<n<<" Numbers: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\nSorting the Array using Bubble Sort Technique..\n";
    for(i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"\nArray Sorted Successfully!\n";
    cout<<"\nThe New Array is: \n";
    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}