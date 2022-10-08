class Solution {
    int helper(int n, vector<int>& dp)
    {
        if(n==0 || n==1) return n;
        else if(dp[n]!=-1) return dp[n];
        else 
        {
        dp[n]=helper(n-1, dp)+helper(n-2, dp);
        return dp[n];
        }
    }
public:
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return helper(n, dp);
    }
};
