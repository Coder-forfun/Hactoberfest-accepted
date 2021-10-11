#include<bits/stdc++.h>

using namespace std;
#define int long long
#define pb push_back

vector<int> bfs(int n, vector<pair<int, int>> adj[]){
    vector<int> bfs;
    vector<int> vis(n+1, 0);

    for(int i=1; i<=n; i++){
        if(!vis[i]){
            queue<int> q;
            cout<<"i-"<<i<<endl;
            q.push(i);
            vis[i]=1;
            while(!q.empty()){
                int cur_node=q.front();
                q.pop();
                bfs.pb(cur_node);
                
                for(auto val:adj[cur_node]){
                    if(!vis[val.first]){
                        cout<<"val.first-"<<val.first<<endl;
                        q.push(val.first);
                        vis[val.first]=1;
                    }
                }
            }
        }
    }
    return bfs;
}

void solve() {
    int n,m;
    bool bidir;
    cin>>n>>m>>bidir;

    vector<pair<int, int>> adj[n+1];
    for(int i=0; i<m; i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].pb({v, wt});
        if(bidir)
            adj[v].pb({u, wt});
    }
    //call bfs here
    // int src;
    // cin>>src;
    vector<int> bfs_res=bfs(n, adj);
    for(int i=0; i<bfs_res.size(); i++){
        cout<<bfs_res[i]<<" ";
    }

}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

  cerr << "time taken : " << (float) clock() / CLOCKS_PER_SEC << " secs" << endl;
  return 0;
}
