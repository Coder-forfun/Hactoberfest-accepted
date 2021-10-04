//Insertion Sort :

// Insertion sort is the sorting mechanism where the sorted array is built
// having one item at a time. The array elements are compared with each other
// sequentially and then arranged simultaneously in some particular order.

// Time Complexity of Insertion Sort is Average and Worst case is : O(n^2).
  
#include<iostream>
using namespace std;
int main()
{
    int arr[50], tot, i, j, k, elem, index;
    cout<<"Enter the Size for Array: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    for(i=1; i<tot; i++)
    {
        elem = arr[i];
        if(elem<arr[i-1])
        {
            for(j=0; j<=i; j++)
            {
                if(elem<arr[j])
                {
                    index = j;
                    for(k=i; k>j; k--)
                        arr[k] = arr[k-1];
                    break;
                }
            }
        }
        else
            continue;
        arr[index] = elem;
    }
    cout<<"\nThe New Array (Sorted Array):\n";
    for(i=0; i<tot; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}