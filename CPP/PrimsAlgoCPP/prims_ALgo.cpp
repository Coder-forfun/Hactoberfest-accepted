#include <limits.h>
#include <iostream>
using namespace std;

#define V 5
int c = 0;

int minKey(int *key, bool *mstSet)
{
    int min = INT_MAX, min_index;
    for (int i = 0; i < V; i++)
    {
        if (mstSet[i] == false && key[i] < min)
        {
            min = key[i], min_index = i;
        }
    }
    return min_index;
}

void display(int *parent, int n, int graph[V][V])
{
    cout << "Edge   Weight\n";
    int cost=0;
    for (int i = 1; i < V; i++)
    {
        printf("%d - %d    %d \n", parent[i], i, graph[i][parent[i]]);
        cost+=graph[i][parent[i]];
    }
    cout<<"Total cost = "<<cost<<endl;
}


void primMST(int graph[V][V])
{
    int parent[V];  
    int key[V];     
    bool mstSet[V]; 
    for (int i = 0; i < V; i++)
    {
        key[i] = INT_MAX, mstSet[i] = false;
    }
    key[0] = 0;     
    parent[0] = -1; 
    for (int i = 0; i < V - 1; i++)
    {
        c++;
        int j = minKey(key, mstSet);
        mstSet[j] = true;
        for (int k = 0; k < V; k++)
        {
            c++;
            if (graph[j][k] && mstSet[k] == false && graph[j][k] < key[k])
                parent[k] = j, key[k] = graph[j][k];
        }
    }
    display(parent, V, graph);
}

int main()

{
    int graph[V][V];
    cout << "Enter the vertices for a graph with " << V << " vetices\n";
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cin >> graph[i][j];
        }
    }
    primMST(graph);
    return 0;
}