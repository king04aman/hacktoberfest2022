// https://leetcode.com/problems/3sum/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums){
        sort(nums.begin(), nums.end()); //sorting the array so we have negatives & positives grouped
        if(nums.size() < 3) return {}; 
        if(nums[0] > 0) return {}; 
        vector<vector<int>> answer;
        for(int i=0; i<nums.size(); ++i){
            // at some Nth pos if  the no. is >0 we cannot get dont have -ve no.s after that to make it 0
            if(nums[i] > 0) break; 
            // iterating till some N where we dont have duplicate value
            if(i > 0 && nums[i] == nums[i-1]) continue; 

            int low = i+1, high = nums.size()-1;
            int sum = 0;
            while(low < high){
                sum = nums[i] + nums[low] + nums[high];
                if(sum > 0) high--; 
                else if(sum < 0) low++;
                else{
                    answer.push_back({nums[i], nums[low], nums[high]}); // self evident
                    int last_low_occurence = nums[low], last_high_occurence = nums[high];
                    while(low < high && nums[low] == last_low_occurence) low++; 
                    while(low < high && nums[high] == last_high_occurence) high--; 
                }
            }
        }
        return answer;
    }
};