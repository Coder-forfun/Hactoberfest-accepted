#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int low = 0, mid = 0, high = n-1; // initializing the pointers
    while(mid <= high)
    {
        switch(a[mid])
        {
            case 0: swap(a[low],a[mid]);
                    low++,mid++;
                    break; // it is required to prevent jumping onto next case
            case 1: mid++;
                    break; 
            case 2: swap(a[high],a[mid]);
                    high--;
                    break; 
        }
    }
    // printing the contents of the array
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
