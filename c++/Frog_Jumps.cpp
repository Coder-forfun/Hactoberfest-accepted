#include <bits/stdc++.h>
//////////////////////////////////////////////////////
// int ans(int n, vector<int> &h, vector<int> &dp)
// {
//MEMOIZATION
//     if(n==0)
//     {
//         return 0;
//     }
    
//     if(dp[n]!=-1)
//     {
//         return dp[n];
//     }
//     int jump1=ans(n-1,h,dp)+abs(h[n]-h[n-1]);
//     int jump2=INT_MAX;
//     if(n>1)
//     {
//         jump2=ans(n-2,h,dp)+abs(h[n]-h[n-2]);
//     }
//     return dp[n]=min(jump1,jump2);
// }
/////////////////////////////////////////////////////
// int ans(int n ,vector<int>h)
// {

//TABULATION
//     vector<int>dp(n+1,0);
//     dp[0]=0;
//     dp[1]=abs(h[0]-h[1]);
//     for(int i=2;i<n;i++)
//     {
//         int fs=dp[i-1]+abs(h[i]-h[i-1]);
//         int ss=dp[i-2]+abs(h[i]-h[i-2]);
//         dp[i]=min(fs,ss);
//     }
//     return dp[n-1];
    
// }
/////////////////////////////////////////////////////////

int ans(int n ,vector<int>h)
{
  //SPACE OPTIMIZATION
   int ss=INT_MAX,fs;
    int prev=0;
    int prev2=0;
   
    for(int i=1;i<n;i++)
    {
         fs=prev+abs(h[i]-h[i-1]);
        if(i>1) { 
            ss=prev2+abs(h[i]-h[i-2]);
            }
        
        int curr_i=min(fs,ss);
        prev2=prev;
        prev=curr_i;
    }
    return prev;
    
}

int frogJump(int n, vector<int> &heights)
{ 
  //  vector<int>dp(n+1,-1);
   // return ans(n-1,heights,dp);
    return ans(n,heights);
}
