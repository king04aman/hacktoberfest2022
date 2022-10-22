
#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
	int V; 

	list<int> *adj;

	Graph(int );

	void addEdge(int, int);

	vector<int> BFS(int, int, int []);
};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V+1];
}

void Graph::addEdge(int u, int v)
{
	if(u>v&&u%v==0){
	
	adj[u].push_back(v); // Add w to v’s list.
	adj[v].push_back(u); // Add v to w’s list.
}
}

vector<int> Graph::BFS(int componentNum, int src,
									int visited[])
{
	// Mark all the vertices as not visited
	// Create a queue for BFS
	queue<int> queue;

	queue.push(src);

	// Assign Component Number
	visited[src] = componentNum;

	// Vector to store all the reachable nodes from 'src'
	vector<int> reachableNodes;

	while(!queue.empty())
	{
		// Dequeue a vertex from queue
		int u = queue.front();
		queue.pop();

		reachableNodes.push_back(u);

		// Get all adjacent vertices of the dequeued
		// vertex u. If a adjacent has not been visited,
		// then mark it visited and enqueue it
		for (auto itr = adj[u].begin();
				itr != adj[u].end(); itr++)
		{
			if (!visited[*itr])
			{
				// Assign Component Number to all the
				// reachable nodes
				visited[*itr] = componentNum;
				queue.push(*itr);
			}
		}
	}
	return reachableNodes;
}

// Display all the Reachable Nodes from a node 'n'
void displayReachableNodes(int n,
			unordered_map <int, vector<int> > m)
{
	vector<int> temp = m[n];
	for (int i=0; i<temp.size(); i++)
		cout << temp[i] << " ";

	cout << endl;
}

// Find all the reachable nodes for every element
// in the arr
void findReachableNodes(Graph g, int arr[], int n)
{
	int count=0;
	// Get the number of nodes in the graph
	int V = g.V;

	// Take a integer visited array and initialize
	// all the elements with 0
	int visited[V+1];
	memset(visited, 0, sizeof(visited));

	// Map to store list of reachable Nodes for a
	// given node.
	unordered_map <int, vector<int> > m;

	// Initialize component Number with 0
	int componentNum = 0;

	// For each node in arr[] find reachable
	// Nodes
	for (int i = 0 ; i < n ; i++)
	{
		int u = arr[i];

		// Visit all the nodes of the component
		if (!visited[u])
		{
			componentNum++;

			// Store the reachable Nodes corresponding to
			// the node 'i'
			m[visited[u]] = g.BFS(componentNum, u, visited);
			count++
		}

		// At this point, we have all reachable nodes
		// from u, print them by doing a look up in map m.
		cout<<count;
		displayReachableNodes(visited[u], m);
	}
}

// Driver program to test above functions
int main()
{
	int t,V
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>V;
	
	// Create a graph given in the above diagram
	
	Graph g(V);
	for(int s=1;s+1=<V;s++)
	g.addEdge(s, s+1);
	
	

	// For every ith element in the arr
	// find all reachable nodes from query[i]
	int arr[] = {2, 4, 5};

	// Find number of elements in Set
	int n = sizeof(arr)/sizeof(int);

	findReachableNodes(g, arr, n);
}
	}

	return 0;
}

