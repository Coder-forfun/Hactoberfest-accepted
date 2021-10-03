#include<bits/stdc++.h>
using namespace std;
int main()
{
  cout<<"Enter the term of fibonacci you want to print\n";
  int n;
  cin>>n;
  int dp[n+1]={0};
  dp[1]=1;
  for(int i=2;i<=n;i++)
    dp[i]=dp[i-1]+dp[i-2];
  cout<<"Nth term of Fibonacci is\n";
  cout<<dp[n]<<"\n";
  return 0;
}
