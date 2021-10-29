#include<iostream>
using namespace std;
void shellsort(int arr[],int sz)
{
    int gap=sz/2;
    int i,j,k;
    for(k=gap;k>1;k--)
    {
        j=k;
        for(i=0; i<k; i++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            j++;
        }
    }

}
int main()
{
    int arr[20];
    int sz;
    cout<<"Enter the size of an array : "<<endl;
    cin>>sz;
    cout<<"Enter the elements is an array :"<<endl;
    for(int i=0; i<sz; i++)
    {
        cin>>arr[i];
    }
    cout<<"Entered array is :"<<endl;
    for(int i=0; i<sz; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Applying Shell Sort on Array......"<<endl<<endl;
    shellsort(arr,sz);
    cout<<"Sorted array is :"<<endl;
    for(int i=0; i<sz; i++)
    {
        cout<<arr[i]<<" ";
    }
}

