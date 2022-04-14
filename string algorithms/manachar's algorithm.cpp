#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	string s;
	cin>>s;
	ll n=s.size();
	ll d1[n],d2[n];
	
	for(ll i=0,l=0,r=-1;i<n;i++)
	{
	    ll k=(i>r)?1:min(d1[l+r-i],r-i+1);
	    
	    while(0<=i-k&&i+k<n&&s[i-k]==s[i+k])
	    k++;
	    
	    d1[i]=k--;
	    if(i+k>r)
	    {
	        l=i-k;
	        r=i+k;
	    }
	   // cout<<d1[i]<<' ';
	}
	
	for(ll i=0,l=0,r=-1;i<n;i++)
	{
	    ll k=(i>r)?0:min(d2[l+r-i+1],r-i+1);
	    
	    while(0<=i-k-1&&i+k<n&&s[i-k-1]==s[i+k])
	    k++;
	    
	    d2[i]=k--;
	    if(i+k>r)
	    {
	        l=i-k-1;
	        r=i+k;
	    }
	   // cout<<d2[i]<<' ';
	}
	
	ll ms=0,l=0,r=0;
	for(ll i=0;i<n;i++)
	{
	   // cout<<d1[i]<<' '<<d2[i]<<'\n';
	    if(2*d1[i]-1>ms)
	    {
	        ms=2*d1[i]-1;
	        l=i-d1[i]+1;
	        r=i+d1[i]-1;
	    }
	    if(2*d2[i]>ms)
	    {
	        ms=2*d2[i];
	        l=i-d2[i];
	        r=i+d2[i]-1;
	    }
	}
	for(ll i=l;i<=r;i++)
	cout<<s[i];
	return 0;
}
