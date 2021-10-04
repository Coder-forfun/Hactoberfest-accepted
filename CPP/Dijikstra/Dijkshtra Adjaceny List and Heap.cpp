#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<cstring>
#define INT_MAX 1000000000
using namespace std;


int dist[100];

class myComparison{
public:
    bool operator()(const int&a,const int&b){
    return dist[a]>dist[b];  // this is for Min-heap based on distance comparison
    }
};

struct node{
int dest;
int  wt;
};


vector<node> adj[100];

void addEdge(int src,int dest,int wt){
node n;
n.dest = dest;
n.wt = wt;
node n1;
n1.dest =src;
n1.wt=wt;
adj[src].push_back(n);
adj[dest].push_back(n1);
}






void dijkstra(int s){

bool visited[100];
memset(dist,INT_MAX,sizeof dist);
memset(visited,false,sizeof visited);
priority_queue<int,vector<int>,myComparison> q;



dist[s]=0;
visited[s]=1;
q.push(s);

while(!q.empty()){
    int cur = q.top();
    q.pop();
    visited[cur]=2;
    int j;
    for(j=0;j<adj[cur].size();j++){
        int des = adj[cur][j].dest;
        int wt = adj[cur][j].wt;

        if(visited[des]==0){
            visited[des]=1;
            dist[des]=dist[cur]+wt;
            q.push(des);
        }
        else if(visited[des]==1){
            if(dist[des] > dist[cur]+wt)
                    dist[des]=dist[cur]+wt;
            if(des==4){
                cout<<"Parent " <<cur<<"Distance :"<<dist[cur]<<"+"<<wt<<"="<<dist[des]<<endl;
             }
        }
    }

}



}

int main(){
int V = 9;
    addEdge( 0, 1, 4);
    addEdge(0, 7, 8);
    addEdge( 1, 2, 8);
    addEdge( 1, 7, 11);
    addEdge( 2, 3, 7);
    addEdge( 2, 8, 2);
    addEdge( 2, 5, 4);
    addEdge(3, 4, 9);
    addEdge( 3, 5, 14);
    addEdge( 4, 5, 10);
    addEdge( 5, 6, 2);
    addEdge( 6, 7, 1);
    addEdge( 6, 8, 6);
    addEdge( 7, 8, 7);
    dijkstra(0);
int i;
for(i=0;i<V;i++)
    cout<<i<<" "<<dist[i]<<endl;
return 0;
}
