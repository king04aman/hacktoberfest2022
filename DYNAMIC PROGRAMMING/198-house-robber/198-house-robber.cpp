class Solution {
public:
    int rob(vector<int>& nums) {
vector<int>dp(nums.size() , 0); //keeps track of the max we can rob on the ith day
if(nums.size()==1) return nums[0];   //if only one house , rob it
if(nums.size()==2)    // if two , rob the house with max money
{
    if(nums[0]>nums[1]) return nums[0];
    else return nums[1];
}
dp[0]=nums[0];
dp[1]=max(nums[0] , nums[1]);
for(int i=2 ; i<nums.size() ; i++)
{
    dp[i]=max(nums[i]+dp[i-2] , dp[i-1]);       //rob the max of (rob the current one + whatever we have robber from i-2 days , dont rob and keep whatever we have robber on i-1 day)
}
return dp[dp.size()-1];
    }
};
