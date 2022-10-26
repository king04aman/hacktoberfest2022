// https://leetcode.com/problems/container-with-most-water/
#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int greatest = 0;
        int l = 0, r = height.size() - 1;
        while(l < r){
            greatest = max(greatest, min(height[l],height[r]) * (r-l));
            height[l] <= height[r] ? l++: r--;
        }
        return greatest;
    }
};