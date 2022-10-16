/*
    Created By : Vikram Markali
*/


#include<bits/stdc++.h>
using namespace std;
 
//Each edge has 3 values source, destination and weight...
struct edge
{
    int source,destination,weight;
};
 
int Bell_Ford(int vertices, int edges, int src, vector<edge> &edge, vector<int> &dist)
{
    int source,dest,weight,i,j;
 
    i=src;
    dist[i-1]=0;

    for(i=1;i<vertices;i++)
    {
        for(j=0;j<edges;j++)
        {
            source=edge[j].source;
            dest=edge[j].destination;
            weight=edge[j].weight;
 
            //if we can get a smaller value of dist[d] using this edge, replace it
            if(dist[source]!=INT_MAX && dist[source]+weight<dist[dest])
            {
                dist[dest]=dist[source]+weight;
            }
        }
    }
    //loop to detect negative cycle...
    for(j=0;j<edges;j++)
    {
        source=edge[i].source;
        dest=edge[i].destination;
        weight=edge[i].weight;
 
        if(dist[source]!=INT_MAX && dist[source]+weight<dist[dest])
        {
            return 0;	//negative cycle...
        }
    }
    return 1;	//no negative cycle...
}

int main()
{
    int vertices,edges;
    int source,dest,w;
    int src;
 
    cout<<"Enter the number of Vertices: ";
    cin>>vertices;
 
    cout<<"Enter the number of Edges: ";
    cin>>edges;
 
    vector<edge> edge(edges);
 
    cout<<"Enter source, destination and weight of each Edge: "<<endl;
    for(int i=0;i<edges;i++)
    {
        cin>>source>>dest>>edge[i].weight;
        edge[i].source=source-1;
        edge[i].destination=dest-1;
    }
    cout<<"Enter source Vertex: ";
    cin>>src;
 
    vector<int> dist(vertices,INT_MAX);

    int result = Bell_Ford(vertices,edges,src,edge,dist);
    cout<<endl;
    if(result)
    {
        cout<<"\nVertex\t\tDistance"<<endl;
        for(int i=0;i<vertices;i++)
        {
            cout<<i+1<<"\t\t"<<dist[i]<<endl;
        }
    }
    else
    {
        cout<<"\nSorry, negative weight Cycle in Graph...! ";
    }
    return 0;
}