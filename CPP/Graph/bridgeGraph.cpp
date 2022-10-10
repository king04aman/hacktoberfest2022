#include<unordered_map>
#include<list>
#include<vector>
using namespace std;
void dfs(int node, int parent, int &timer, vector<int> &dis, vector<int> &low, vector<vector<int>> &res, unordered_map<int,list<int>> &adj, unordered_map<int,bool> &vis){
    vis[node] = true;
    //initially dis low timer ke barabar hohga
    dis[node] = low[node] = timer++;
    
    for(auto nbr: adj[node]){
        if(nbr == parent)
            continue;
        if(!vis[nbr]){
            dfs(nbr,node,timer,dis,low,res,adj,vis);
            low[node] = min(low[node],low[nbr]);
            //check kro edge bridge hai ya nhi
            if(low[nbr] > dis[node]){
                //ans bnao
                vector<int> ans;
                ans.push_back(node);
                ans.push_back(nbr);
                res.push_back(ans);
            }
        }
        else{
            //back_edge
            low[node] = min(low[node],dis[nbr]);
        }
    }
}

vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e) {
    //create adjacency list
    unordered_map<int,list<int>> adj;
    for(int i=0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    //kuch data structures ki need hai 
    vector<int> dis(v);
    vector<int> low(v);
    int parent = -1;
    int timer = 0;
    unordered_map<int,bool> vis;
    
    for(int i=0; i<v; i++){
        dis[i] = -1;
        low[i] = -1;
    }
    
    //dfs call krdo
    vector<vector<int>> res;
    for(int i=0; i<v; i++){
        if(!vis[i]){
            dfs(i,parent,timer,dis,low,res,adj,vis);
        }
    }
    return res;
}