// check if given pairs lie on same path or not.

#include<bits/stdc++.h>
using namespace std;
const int MAX = 100001;

// To keep track of visited vertices in DFS
bool visit[MAX] = {0};

// To store start and end time of all vertices
// during DFS.
int intime[MAX];
int outtime[MAX];

// initially timer is zero
int timer = 0;

// Does DFS of given graph and fills arrays
// intime[] and outtime[]. These arrays are used
// to answer given queries.
void dfs(vector<int> graph[], int v)
{
	visit[v] = true;

	// Increment the timer as you enter
	// the recursion for v
	++timer;

	// Upgrade the in time for the vertex
	intime[v] = timer;

	vector<int>::iterator it = graph[v].begin();
	while (it != graph[v].end())
	{
		if (visit[*it]==false)
			dfs(graph, *it);
		it++;
	}

	// increment the timer as you exit the
	// recursion for v
	++timer;

	// upgrade the outtime for that node
	outtime[v] = timer;
}

// Returns true if 'u' and 'v' lie on same root to leaf path
// else false.
bool query(int u, int v)
{
	return ( (intime[u]<intime[v] && outtime[u]>outtime[v]) ||
			(intime[v]<intime[u] && outtime[v]>outtime[u]) );
}

// Driver code
int main()
{
	// Let us create above shown tree
	int n = 9; // total number of nodes
	vector<int> graph[n+1];
	graph[1].push_back(2);
	graph[1].push_back(3);
	graph[3].push_back(6);
	graph[2].push_back(4);
	graph[2].push_back(5);
	graph[5].push_back(7);
	graph[5].push_back(8);
	graph[5].push_back(9);

	// Start dfs (here root node is 1)
	dfs(graph, 1);

	// below are calls for few pairs of nodes
	query(1, 5)? cout << "Yes\n" : cout << "No\n";
	query(2, 9)? cout << "Yes\n" : cout << "No\n";
	query(2, 6)? cout << "Yes\n" : cout << "No\n";

	return 0;
}
