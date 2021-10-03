//https://cses.fi/problemset/task/1672/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf=1e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n,m,q;
    cin >> n >> m >> q;
    ll dp[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            dp[i][j]=inf;
        }   
    }
    for(int i=0;i<m;i++)
    {
        ll x,y,l;
        cin >> x >> y >> l;
        dp[x][y] =min(dp[x][y],l);
        dp[y][x] = min(dp[y][x],l);
    }
    //floyd-warshall
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
                if(j==i || k==i)
                continue;
                else if(j==k)
                dp[j][k]=0;
                else
                {
                    ll d1 = dp[j][i]+dp[i][k];
                    ll d2 = dp[k][i]+dp[i][j];
                    ll d = min(d1,d2);
                    if(dp[j][k]>d)
                    dp[j][k]=d;
                }  
            }
        }
    }
    while(q--)
    {
        ll x,y;
        cin >> x >> y;
        if(dp[x][y]==inf)
        cout << -1  << "\n";
        else
        cout << dp[x][y] << "\n";
    }
    return 0;
}


