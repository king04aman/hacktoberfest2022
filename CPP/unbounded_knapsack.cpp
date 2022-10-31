#include <bits/stdc++.h> 

int solve(int ind, int W, vector<int>& profit, vector<int> &wt, vector<vector<int>>&dp)
{
    // base case
    if(ind == 0 )
    {
        return ((int)W/wt[0])*profit[0];
    }
    if(dp[ind][W]!=-1)
    {
        return dp[ind][W];
    }
    
    int notake = 0 + solve(ind-1, W, profit, wt, dp);
    int take = INT_MIN;
    if(wt[ind]<=W)
    {
        take = profit[ind] + solve(ind, W-wt[ind], profit, wt, dp);
    }
    return dp[ind][W] = max(take, notake);
}


int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &wt)
{
//     vector<vector<int>>dp(n, vector<int>(w+1,0));
    vector<int>prev(w+1, 0), curr(w+1, 0);
    for(int i =0; i<=w; i++)
    {
        prev[i] = ((int)i/wt[0])*profit[0];
    }
    for(int ind = 1; ind<n; ind++)
    {
        for(int W=0; W<=w; W++)
        {
            int notake = 0 + prev[W];
            int take = INT_MIN;
            if(wt[ind]<=W)
            {
                take = profit[ind] + prev[W-wt[ind]];
            }
            prev[W] = max(take, notake);
        }
//         prev = curr;
    }
    return prev[w];
}
