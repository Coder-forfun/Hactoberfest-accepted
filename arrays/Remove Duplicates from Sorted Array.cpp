#include <iostream>
using namespace std;
int removeDuplicates(int a[],int n)
    {   if(n==0)
        return 0;
        int i=0,j=1;
        while(j<n)
        {
            if(a[j]==a[j-1])
            {j++;}
            else{
                i++;
                a[i]=a[j];
                j++;
            }
        }
     return i+1;
}
int main() {
    int arr[]={1,2,2,3,6,9,9,11};
    int p=removeDuplicates(arr,8);
    for(int i=0;i<p;i++) cout<<arr[i];
    return 0;
}
