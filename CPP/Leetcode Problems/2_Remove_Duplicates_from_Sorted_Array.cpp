// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int left = 0;
        for(int right = 1; right < size; right++){
            if(nums[left] != nums[right]){
                left++;
                nums[left] = nums[right];
            }
        }
        return left+1;
    }
};