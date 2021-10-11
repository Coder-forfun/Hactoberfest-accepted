#include<bits/stdc++.h>
using namespace std;



int cost[10][10];
int visited[10] = {0};
int mn=0, min_cost=0;

int n, ne=1, a=0, b=0, u=0, v=0, i, j;
int main()
{

	cout<<"Enter the number of nodes:"<<endl;
	cin>>n;
	cout<<"Enter the cost matrix:"<<endl;
	
	for(i=1 ; i<=n ; i++)
	{
		for(j=1 ; j<=n ; j++)
		{
			cin>>cost[i][j];
			if(cost[i][j]==0)
			{
				cost[i][j] = 999;
			}
		}
	}
	for(i=1; i<=n; i++)
	visited[i]=0;
	cout<<"Enter the root node:"<<endl;
    cin>>i;
	visited[i]=1;
  cout<<"Minimum cost spanning tree:"<<endl;
	
	visited[1] = 1;
	while(ne < n)
	{
		for(i=1, mn=999 ; i<=n ; i++)
		{
			for(j=1 ; j<=n ; j++)
			{
				if(cost[i][j] < mn)
				{
					if(visited[i] != 0)
					{
						mn = cost[i][j];
						a=u=i;
						b=v=j;
					}
				}
			}
		}
		if(visited[u]==0 || visited[v]==0)
		{
			printf("\nEdge %d : (%d -> %d) cost = %d \n", ne++, a, b, mn);
			min_cost = min_cost + mn;
			visited[b]=1;
		}
		cost[a][b] = cost[b][a] = 999;
	}
    cout<<"\nMinimum cost: " <<min_cost <<endl ;
		
}


