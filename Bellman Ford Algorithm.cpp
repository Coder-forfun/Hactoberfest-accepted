#include<iostream>
#include<list>
#include<climits>
using namespace std;

/*Algorithm Complexity O(VE)
Following are the detailed steps.

Input: Graph and a source vertex src
Output: Shortest distance to all vertices from src. If there is a negative weight cycle, then shortest distances are not calculated, negative weight cycle is reported.

1) This step initializes distances from source to all vertices as infinite and distance to source itself as 0. Create an array dist[] of size |V| with all values as infinite except dist[src] where src is source vertex.
2) This step calculates shortest distances. Do following |V|-1 times where |V| is the number of vertices in given graph.
…..a) Do following for each edge u-v
………………If dist[v] > dist[u] + weight of edge uv, then update dist[v]
………………….dist[v] = dist[u] + weight of edge uv
3) This step reports if there is a negative weight cycle in graph. Do following for each edge u-v
……If dist[v] > dist[u] + weight of edge uv, then “Graph contains negative weight cycle”
The idea of step 3 is, step 2 guarantees shortest distances if graph doesn’t contain negative weight cycle. If we iterate through all edges one more time and get a shorter path for any vertex, then there is a negative weight cycle

 Like other Dynamic Programming Problems, the algorithm calculate shortest paths in bottom-up manner. It first calculates the shortest distances for the shortest paths which have at-most one edge in the path. Then, it calculates shortest paths with at-nost 2 edges, and so on.
 After the ith iteration of outer loop, the shortest paths with at most i edges are calculated.
 There can be maximum |V| – 1 edges in any simple path, that is why the outer loop runs |v| – 1 times.

*/


class Graph{
    int V,E;

    struct Edge{
    int v,w;
    int weight;
    };

    list<Edge> edges;
public:
    Graph(int V,int E);
    void addEdge(int s,int d,int w);
    void bellmanFord(int s);
};

Graph::Graph(int V,int E){
this->V= V;
this->E=E;
}

void Graph::addEdge(int s,int d,int wt)
{
    struct Edge e;
    e.v=s;
    e.w=d;
    e.weight=wt;
    edges.push_back(e);
}

void Graph::bellmanFord(int s){
    int dist[V];

    for(int i=0;i<V;i++)
        dist[i]=INT_MAX;
    dist[s]=0;
    list<Edge>::iterator j;
    for(int i=1;i<V;i++){ //Relax ALL edges V-1 times.
        for(j=edges.begin();j!=edges.end();j++){
            int v =  (*j).v;
            int w =  (*j).w;
            int weight = (*j).weight;
            if(dist[v]+ weight < dist[w])
                dist[w]=dist[v]+weight;
        }
    }

    //Check for negative cycle
    for(j=edges.begin();j!=edges.end();j++){
            int v =  (*j).v;
            int w =  (*j).w;
            int weight = (*j).weight;
            if(dist[v]+ weight < dist[w])
                cout<<"Negative Cycle Exists !"<<endl;
        }
    //Print the solution
    cout<<"Vertex - Distance from Source"<<endl;
    for(int i=0;i<V;i++){
        cout<<i<<"  "<<dist[i]<<endl;
    }
}


int main(){

Graph g(5,8);
g.addEdge(0,1,-1);
g.addEdge(0,2,4);
g.addEdge(1,2,3);
g.addEdge(1,3,2);
g.addEdge(1,4,2);
g.addEdge(3,2,5);
g.addEdge(3,1,1);
g.addEdge(4,3,-3);

g.bellmanFord(0);

return 0;
}
