class Solution {
public:
int ans=0;
void help(vector<int>nums , int s , int e)
{
   vector<int>temp;
   for(int i=s ; i<e ; i++)
   {
       temp.push_back(nums[i]);
   }
   vector<int>dp(temp.size(),0);
   dp[0]=temp[0];
   dp[1]=max(temp[0] , temp[1]);
   for(int i=2 ; i<temp.size() ; i++)
   {
       dp[i]=max(temp[i]+dp[i-2] , dp[i-1]);   
   }
   ans=max(ans , dp[temp.size()-1]);
}
    int rob(vector<int>& nums) {
if(nums.size()==1) return nums[0];
if(nums.size()==2) return max(nums[0] , nums[1]); 
help(nums , 0 , nums.size()-1);
help(nums , 1 , nums.size()  );
return ans;
    }
};