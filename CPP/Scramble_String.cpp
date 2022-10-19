https://leetcode.com/problems/scramble-string/
class Solution {
public:
    
    unordered_map<string,int> dp;
    bool solve(string s1,string s2){
        if(s1 == s2) return true;
        if(s1.length() != s2.length()) return false;
        string key = s1 +"*"+ s2;
        if(dp.count(key) > 0) return dp[key];
        
         dp[key] = false;
        int n = s1.length();
        for(int i = 1;i<s1.length();i++){
            bool op1 = solve(s1.substr(0,i),s2.substr(n-i,i)) and solve(s1.substr(i,n-i),s2.substr(0,n-i));
            bool op2 = solve(s1.substr(0,i),s2.substr(0,i)) && solve(s1.substr(i,n-i),s2.substr(i,n-i));
            dp[key] = dp[key] || (op1 || op2);
        }
        return dp[key];
    }
    bool isScramble(string s1, string s2) {
        return solve(s1,s2);
    }
};
