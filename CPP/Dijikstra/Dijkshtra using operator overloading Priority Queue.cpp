
int dist[100005],n;

struct node1
{
	 int idx;
};
vector<node1>v[100005],v1[100005];

bool operator<(const node1& a,const node1&b)
{
    return dist[a.idx]>dist[b.idx];
}


void djistra(int src)
{
	 int i;
	 int visited[100005];
	priority_queue<node1>q;
	memset(visited,0,sizeof(visited));

	for(i=1;i<=n;++i)
	dist[i]=INT_MAX;

	dist[src]=0;
	visited[src]=1;

	node1 p;
	p.idx=src;
	q.push(p);
	while(!q.empty())
	{
		node1 p1=q.top();
		int tp=p1.idx;
		q.pop();
		//cout<<tp<<" "<<dist[tp]<<endl;
		visited[tp]=2;
		for(i=0;i<v[tp].size();++i)
		{
			 node1 p2=v[tp][i];
			if(visited[p2.idx]==0)
			{
				dist[p2.idx]=dist[tp];
				q.push(p2);
				visited[p2.idx]=1;
			}
			else if(visited[p2.idx]==1)
			{
			     int tmp=dist[p2.idx];
				dist[p2.idx]=min(dist[p2.idx],dist[tp]);
				if(dist[p2.idx]<tmp)
				q.push(p2);
			}
		}
		for(i=0;i<v1[tp].size();++i)
		{
			 node1 p2=v1[tp][i];
			if(visited[p2.idx]==0)
			{
				dist[p2.idx]=dist[tp]+1;
				q.push(p2);
				visited[p2.idx]=1;
			}
			else if(visited[p2.idx]==1)
			{
			    int tmp=dist[p2.idx];
				dist[p2.idx]=min(dist[p2.idx],dist[tp]+1);
				if(dist[p2.idx]<tmp)
				q.push(p2);
			}
		}
	}
}
int main()
 {
  int m,i,n1,n2;
  s(n);s(m);
  for(i=0;i<m;++i)
  {
  	s(n1);s(n2);
  	node[i].fr=n1;
  	node[i].to=n2;
  }
  sort(node,node+m,compare);

  node1 p1,p2;
  p1.idx=node[0].to;
  p2.idx=node[0].fr;
  if(p1.idx!=p2.idx)
  {
  v[node[0].fr].pb(p1);
  v1[node[0].to].pb(p2);
  }
  for(i=1;i<m;++i)
  {
  	if(node[i].fr==node[i-1].fr && node[i].to==node[i-1].to)
  	continue;
  	else if(node[i].fr==node[i].to)
  	continue;
  	else
  	{
  		 p1.idx=node[i].to;
         p2.idx=node[i].fr;
  		 v[node[i].fr].pb(p1);
        v1[node[i].to].pb(p2);
  	}
  }
  djistra(1);
  if(dist[n]!=INT_MAX)
  printf("%d",dist[n]);
  else
  printf("-1");
	return 0;
}
