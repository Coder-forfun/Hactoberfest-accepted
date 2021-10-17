#include <bits/stdc++.h>
using namespace std;
void dfs(int x, int y, int n, int m, vector<vector<char>> &rooms, vector<vector<bool>> &vis)
{
    if(x<0 || y<0 || x>=n || y>=m || vis[x][y] || rooms[x][y]!='.')
    {
        return;
    }
    vis[x][y] = true;
    dfs(x-1, y, n, m, rooms, vis);
    dfs(x+1, y, n, m, rooms, vis);
    dfs(x, y-1, n, m, rooms, vis);
    dfs(x, y+1, n, m, rooms, vis);
}
int main()
{
    int n,m;
    cin>>n>>m;
    
    vector<vector<char>> rooms(n, vector<char> (m, '#'));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            char c;
            cin>>c;
            
            rooms[i][j] = c;
        }
    }
    
    vector<vector<bool>> vis(n, vector<bool> (m,false));
   
    int count = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(rooms[i][j]=='.' && !vis[i][j])
            {
                dfs(i, j, n, m, rooms, vis);
                count+=1;
            }
        }
    }
    cout<<count<<endl;
}