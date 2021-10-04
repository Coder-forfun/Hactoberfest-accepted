#include <bits/stdc++.h>
using namespace std;
#define sz(a)               ll((a).size())
#define ll                  long long
#define pb                  push_back
#define ld                  long double
#define mp                  make_pair
#define vi                  vector<ll>
#define vii                  vector<pi>
#define endl                "\n"
#define ff                  first
#define ss                  second
#define all(c)              (c).begin(),(c).end()
#define allr(c)             (c).rbegin(),(c).rend()
#define rep(i,n)            for(ll i=0;i<n;i++)
#define cpresent(c,x)       (find(all(c),x) != (c).end())
#define input(a,n)          for(long long i=0;i<n;i++)cin>>a[i]
#define output(a)           for(long long i=0;i<a.size();i++)cout<<a[i]<<" "
#define reset(a,n)          memset(a,n,sizeof(a))   // n can only be 0 or -1
#define ep                  1e-10
#define seed                13331
#define pi                  pair<ll,ll>
#define inf                 10e9
#define N                   1000000
#define minp                vector<ll>, greater<ll>
#define M                   1000000007
#define pie                 3.1415926535897932384626433832795
#define eu                  2.718281828459045
#define                     she_taught_me_to_code cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);cin.tie(NULL);    clock_t startTime=clock(); cout<<fixed<<setprecision(12);
#define time     cout<<(double(clock()-startTime )/(double)CLOCKS_PER_SEC)*1000<<" ms"<<endl;
#define debug(k) cout<<"\t-> "<<#k<<" = "<<k<<endl;


bool sortbysec(const pair<ll,ll> &a,const pair<ll,ll> &b){
    return (a.ss < b.ss);
}
bool sortbyth(const pair<ll,pair<ll,ll> > &a,const pair<ll,pair<ll,ll> > &b){
    return (a.ss.ss < b.ss.ss);
}
ll gcd(ll a,ll b){
    return b?gcd(b, a % b):a;
}
ll lcm(ll a,ll b){
    return (a*b)/gcd(a,b);
}
ll min(ll a,ll b){
    return a<b?a:b;
}
ll max(ll a,ll b){
    return a>b?a:b;
}
ll max3(ll a,ll b,ll c){
    return max(max(a,b),c);
}
ll max4(ll a,ll b,ll c,ll d){
    return max(max(a,b),max(c,d));
}
ll min3(ll a,ll b,ll c){
    return min(min(a,b),c);
}
ll min4(ll a,ll b,ll c,ll d){
    return min(min(a,b),min(c,d));
}
ll po(ll x,ll n,ll mod=M){
    if(n==0){
        return 1;
    }
    ll m=po(x,n/2,mod);
    m*=m;
    m%=mod;
    if(n%2){
        m*=x;
        m%=mod;
    }
    return m;
}
vi st(N),mi(N),adj[N],vis(N,0),art_points;
ll t=0;
vector<pi> bridge;
void dfs(ll u,ll parent){
    t++;
    st[u]=t;
    mi[u]=t;
    vis[u]=1;
    for(ll i=0;i<adj[u].size();i++){
        if(!vis[adj[u][i]]){
            dfs(adj[u][i],u);
            vis[adj[u][i]]=1;
            if(mi[adj[u][i]]>st[u]){
                bridge.pb({u,adj[u][i]});
            }
            mi[u]=min(mi[u],mi[adj[u][i]]);
        }
        if(vis[adj[u][i]] && adj[u][i]!=parent){
            mi[u]=min(mi[u],mi[adj[u][i]]);
        }
    }
}
int main(){

    ll n,m;
    cin>>n>>m;
    for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    dfs(1,0);
    cout<<bridge.size()<<endl;
    for(ll i=0;i<bridge.size();i++){
        cout<<bridge[i].ff<<" "<<bridge[i].ss<<endl;
    }
}

