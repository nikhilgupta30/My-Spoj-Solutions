#include <bits/stdc++.h>
using namespace std;
 
class Graph
{
    long long V;              // No. of vertices
    list<long long> *adj;     
	
	public:
		Graph(long long V);              // Constructor
		void addEdge(long long v, long long w);// function to add an edge to graph
		long long longestPathLength();  // prlong longs longest path of the tree
		pair<long long, long long> bfs(long long u); // function returns maximum distant
                               // node from u with its distance
};
 
Graph::Graph(long long V)
{
    this->V = V;
    adj = new list<long long>[V];
}
 
void Graph::addEdge(long long v, long long w)
{
    adj[v].push_back(w);    // Add w to vÃ¢â�¬â�¢s list.
    adj[w].push_back(v);    // Since the graph is undirected
}
 
//  method returns farthest node and its distance from node u
pair<long long, long long> Graph::bfs(long long u)
{
    //  mark all distance with -1
    long long dis[V];
    memset(dis, -1, sizeof(dis));
 
    queue<long long> q;
    q.push(u);
 
    //  distance of u from u will be 0
    dis[u] = 0;
 
    while (!q.empty())
    {
        long long t = q.front();       q.pop();
 
        //  loop for all adjacent nodes of node-t
        for (list<long long>::iterator it = adj[t].begin(); it != adj[t].end(); it++)
        {
            long long v = *it;
 
            // push node long longo queue only if
            // it is not visited already
            if (dis[v] == -1)
            {
                q.push(v);
 
                // make distance of v, one more
                // than distance of t
                dis[v] = dis[t] + 1;
            }
        }
    }
 
    long long maxDis = 0;
    long long nodeIdx;
 
    //  get farthest node distance and its index
    for (long long i = 0; i < V; i++)
    {
        if (dis[i] > maxDis)
        {
            maxDis = dis[i];
            nodeIdx = i;
        }
    }
    return make_pair(nodeIdx, maxDis);
}
 
//  method prlong longs longest path of given tree
long long Graph::longestPathLength()
{
    pair<long long, long long> t1, t2;
 
    // first bfs to find one end polong long of
    // longest path
    t1 = bfs(0);
 
    //  second bfs to find actual longest path
    t2 = bfs(t1.first);
 
    //cout << "Longest path is from " << t1.first << " to "
      //   << t2.first << " of length " << t2.second;
	  return t2.second;
}
 
// Driver code to test above methods
int main()
{
    
	int c;
	cin>>c;
	
	while(c--){
		long long n;
		cin>>n;
		
		Graph g(n);
		
		for(long long i=0;i<n-1;i++){
			long long u,v;
			cin>>u>>v;
			g.addEdge(u, v);
		}
	 
		long long longestPath = g.longestPathLength();
		long long ans = longestPath/2 + longestPath%2;
		
		cout<<ans<<"\n";	
	}
	
    return 0;
}
