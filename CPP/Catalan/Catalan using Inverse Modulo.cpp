#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define MOD 1000000007
#define ll long long
ll fact[2000005];


void factorial(){
fact[0]=fact[1]=1;
for(int i=2;i<=2000000;i++)
    {fact[i]=i*fact[i-1];
    fact[i]%=MOD;
    }
}

ll pow(ll a,ll b)
{
    ll res=1;
    while(b){

        if(b&1)
            res=(res*a)%MOD;

            a=(a*a)%MOD;
            b=b>>1;
    }
    return res;
}

ll catalan(ll n){
   return ((((fact[2*n]*pow(fact[n],MOD-2))%MOD)*pow(fact[n+1],MOD-2))%MOD)%MOD;
}



int main(){
ll t,n;
factorial();
cin>>t;
while(t--){
    scanf("%lld",&n);
    printf("%lld\n",catalan(n));
    }

return 0;
}
