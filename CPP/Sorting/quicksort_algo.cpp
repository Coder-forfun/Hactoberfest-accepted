#include<iostream>
#include<climits>
using namespace std;

void swap(int arr[], int a, int b)
{
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

int partition(int arr[], int l, int r)
{
    int pi=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++)
    {
        if(arr[j]<pi)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i+1, r);
    return (i+1);
}

void quicksort(int arr[], int l, int r)
{
    

    if(l<r)
    {
        int pivot=partition(arr, l, r);
        quicksort(arr, l, pivot-1);
        quicksort(arr, pivot+1, r);
    }
}

void display(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l=0;
    int r=n-1;
    quicksort(arr, l, r);
    
    display(arr, n);
}