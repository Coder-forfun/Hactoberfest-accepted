#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll z[2000005];
 
int main() {
	string s;
	cin>>s;
	ll n=s.size();
	
	for (ll i = 1, l = 0, r = 0; i < n; ++i) {
        if (i <= r)
            z[i] = min (r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            ++z[i];
        if (i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
    }
	
	for(ll i=1;i<n;i++)
	{
	   // cout<<z[i]<<' '<<n-i<<'\n';
	    if(z[i]==n-i)
	    cout<<i<<' ';
	}
	cout<<s.size()<<' ';
	return 0;
}
