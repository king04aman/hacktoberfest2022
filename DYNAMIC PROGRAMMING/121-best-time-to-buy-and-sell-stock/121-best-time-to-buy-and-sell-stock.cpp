class Solution {
public:
    int maxProfit(vector<int>& prices) {
int ans=0;
int mini=INT_MAX;
for(auto i : prices)
{
    mini=min(mini , i);
    ans=max(ans , i-mini);
}
        return ans;
    }
};