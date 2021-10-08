#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define MAX 1000

/*DP Solution for Catalan Numbers.TLE for Large value of MAX*/
long long dp[MAX];
void catalan(){
    dp[0]=dp[1]=1;
    for(int i=2;i<10000;i++){
        dp[i]=0;
        for(int j=0;j<i;j++)
            {dp[i]+=dp[j]*dp[i-j-1];
             dp[i]%=1000000007;
            }
    }
}

int main(){

//memset(dp,0,sizeof dp);
catalan();
int t,n;
cin>>t;

while(t--){
    scanf("%d",&n);
    printf("%lld\n",dp[n]);
    }
return 0;
}
