// https://leetcode.com/problems/two-sum/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        vector<int> vec;
        for(int i=0; i<len; i++){
            for(int j=i+1; j<len; j++){
                if( *(nums.begin()+i) == target - *(nums.begin()+j)) {
                    vec.emplace_back(i);
                    vec.emplace_back(j);
                    return vec;
                }
            }
        }
        return nums;
    }
};