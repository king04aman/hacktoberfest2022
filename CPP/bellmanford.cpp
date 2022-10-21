#include<bits/stdc++.h>
using namespace std;
#define INF 9999

vector<vector<pair<int,int>>> adj(1000);
vector<int>dis;
vector<int>par;
int source;

int pathfind(int dest)
{
    if(dest!=source && par[dest]==-1)
    {
        cout << "Path not found\n";
        return 0;
    }
    if(dest==source)
    {
        cout << "Path: " << source;
        return 0;
    }
    pathfind(par[dest]);
    cout << " " << dest;
}
int main()
{
    ifstream input("bellmanford_input.txt");
    if(!input.is_open())
    {
        cout << "File not open!\n";
    }

    int totalnode,node1,node2,weight;
    input>>totalnode;
    while(input>>node1>>node2>>weight)
    {
        adj[node1].push_back(make_pair(node2,weight));
    }

    /*for(int i=0;i<totalnode;i++)
    {
        cout << i << ": ";
        for(int j=0;j<adj[i].size();j++)
        {
            cout << adj[i][j].first << "("<<adj[i][j].second<<")->";
        }
        cout << endl;
    }*/

    cout << "Enter source: ";
    cin>> source;

    dis.assign(totalnode,INF);
    par.assign(totalnode,-1);
    dis[source]=0;

    for(int i=0; i<totalnode-1; i++)
    {
        for(int u=0; u<totalnode; u++)
        {
            for(int j=0; j<adj[u].size(); j++)
            {
                pair<int,int> v=adj[u][j];
                if(dis[u]==INF)
                    continue;
                if(dis[u]+v.second<dis[v.first])
                {
                    dis[v.first]=dis[u]+v.second;
                    par[v.first]=u;
                }
            }
        }
    }

    bool hascycle = false;
    for(int u=0; u<totalnode; u++)
    {
        for(int j=0; j<adj[u].size(); j++)
        {
            pair<int,int> v=adj[u][j];
            if(dis[u]==INF)
                continue;
            if(dis[u]+v.second<dis[v.first])
            {
                hascycle = true;
                break;
            }
        }
        if(hascycle)
        {
            break;
        }
    }

    if(hascycle)
    {
        cout << "The graph has negative cycle\n";
    }
    else
    {
        int dest;
        cout << "Enter destination: ";
        cin>>dest;
        cout << "Distance: " << dis[dest] << endl;
        pathfind(dest);
    }
    return 0;
}
