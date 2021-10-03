// https://cses.fi/problemset/task/1668  Problem link
// This is a nice problem to understand the concept of Bipartite graph


#include<iostream>
#include<vector>
using namespace std ;
 
vector<int> adj[100001];
int visited[100001];
int team[100001] ;
 
bool DFS_Team(int start , int t){
    
    visited[start] = 1 ;
    team[start] = t ;
 
    for(int x : adj[start]){
        if(visited[x] == 0){
            if(t == 1){
                if(DFS_Team(x , 2) == false) return false ;
            }
            else if(t == 2)
                if(DFS_Team(x , 1) == false) return false ;
        }
        else {
            if(team[x] == team[start]) return false ;
        }
    }
 
    return true ;
 
}
 
int main(){
 
    int v , e ;
    cin >> v >> e ;
 
    for(int i =  1 ; i <= e ; i++){
        int start , end;
        cin >> start >> end ;
        adj[start].push_back(end);
        adj[end].push_back(start);
    }
 
    bool ans = true;
    for(int i = 1; i <= v ; i++){
        if(visited[i] == 0){
            int result = DFS_Team(i ,1) ;
            ans = result ;
            if(result ==  false){
            break ;
            }
           
        }
    }
    if(ans == false) cout<<"IMPOSSIBLE";
     else {
    for(int i = 1 ; i <= v ; i++){
        cout<<team[i]<<" ";
    }
     }
    return 0 ;
}