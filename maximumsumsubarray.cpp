#include<bits/stdc++.h>
using namespace std;
int maximumsubarray(int a[],int n)
{
    int b=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<i;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=a[k];
            }
            b=max(b,sum);
        }
    }
        return b;
}
int main()
{
    int a[7]={1,2,4,-9,6,-4,-2};
    int n=sizeof(a)/sizeof(a[0]);
    int max_sum=maximumsubarray(a,n);
    cout<<"Maximum subarray is "<<max_sum;
    return 0;

}
/*this program returns the maximum subarry sum of the given array.
Time complexity:O(n^3)
*/