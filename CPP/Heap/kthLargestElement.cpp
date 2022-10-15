#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {

        priority_queue<int, vector<int>, greater<int>> min_heap;

        for (int i = 0; i < nums.size(); i++)
        {
            min_heap.push(nums[i]);
            if (min_heap.size() > k)
            {
                min_heap.pop();
            }
        }
        return min_heap.top();
    }
};