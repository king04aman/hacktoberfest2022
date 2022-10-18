/*
GFG: https://practice.geeksforgeeks.org/problems/number-of-distinct-islands/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number-of-distinct-islands
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
  private:
    void dfs(int row, int col, vector<vector<int>> &vis, vector<vector<int>> &grid, 
            vector<pair<int,int>> &vec, int n, int m, int row0, int col0) {
        
        vis[row][col] = 1;
        
        // subtracting base to store the island
        vec.push_back({row - row0, col - col0});
        
        int dx[] = {1, 0, -1, 0};
        int dy[] = {0, 1, 0, -1};
        
        for(int ind = 0; ind < 4; ind++) {
            int newr = row + dx[ind];
            int newc = col + dy[ind];
            
            if(newr >= 0 && newr < n && newc >= 0 && newc < m 
                && !vis[newr][newc] && grid[newr][newc] == 1) {
                
                dfs(newr, newc, vis, grid, vec, n, m, row0, col0);
            }
        }
    }
  public:
    int countDistinctIslands(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> vis(n, vector<int> (m, 0));
        
        set<vector<pair<int,int>>> st;   // store the unique islands
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                // store the coordinates
                vector<pair<int,int>> vec;
                if(!vis[i][j] && grid[i][j] == 1) {
                    // row, col, vis, grid, n, m, base(row0, col0)
                    dfs(i, j, vis, grid, vec, n, m, i, j);
                    st.insert(vec);
                }
            }
        }
        
        return st.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}