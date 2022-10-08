class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
for(int i=cost.size()-3 ; i>=0 ; i--)
{
    cost[i]=min(cost[i+1] , cost[i+2]) + cost[i];
}
for(auto i : cost) cout<<i<<" ";
return min(cost[0] , cost[1]);
  }
};