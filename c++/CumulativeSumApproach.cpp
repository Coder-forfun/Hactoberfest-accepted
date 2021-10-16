/******************************************************************************
Cumulative Sum Approach: 
 We use Cumulative sum Approach because time complexity of CSA is better then brute froce.
 Time complexity= O(N^2)
 Example:
  array ={-1,7,,2}
  CSA={-1,3,10,12}
*******************************************************************************/
#include<iostream>
#include<climits>
using namespace std;

int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int currsum[n+1];
currsum[0]=0;
for(int i=1;i<=n;i++)
{
    currsum[i]=currsum[i-1]+a[i-1];
}
int maxSum=INT_MIN;

for(int i=1;i<=n;i++)
{
    int sum=0;
    for(int j =0;j<i;j++)
    {
        sum=currsum[i]-currsum[j];
        maxSum =max(sum,maxSum);
    }
}
cout<<maxSum;
    return 0;
}

