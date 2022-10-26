// https://leetcode.com/problems/search-insert-position/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        for(int i=0; i<size; i++){
            if(nums[i]!=target){
                if(target < nums[i]){
                    return i;
                }
            }
            if(nums[i]==target){
                return i;
            }
        }
        return size;
    }
};