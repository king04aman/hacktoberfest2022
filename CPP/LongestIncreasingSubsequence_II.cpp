/*
  Contributor Name: Anurodh Chadha
  Contributor github profile: Anurodhac
  Problem Link:
  https://leetcode.com/problems/longest-increasing-subsequence-ii/
  Time complexity: O(n*log(max element of the array)
  Space Complexity: O(4*n) { Initialising the size of segment tree four times the size of array }
*/
class Solution {
public:
    static const int N = 4e5 + 5;
    // segtree functions
    int segtree[N];
    void build (vector<int>& a, int v, int tl, int tr)
    {
        if (tl == tr)
        {
            segtree[v] = a[tl];
            return;
        }
        int tm = (tl + tr) / 2;
        build(a, 2 * v + 1, tl, tm);
        build(a, 2 * v + 2, tm + 1, tr);
        segtree[v] = max(segtree[2 * v + 1], segtree[2 * v + 2]);
    }
    void update(vector<int>& a, int v, int tl, int tr, int val, int idx)
    {
        if (tl == tr)
        {
            segtree[v] = val;
            a[idx] = val;
        }
        else
        {
            int tm = (tl + tr) / 2;
            if (idx <= tm)   update(a, 2 * v + 1, tl, tm, val, idx);
            else update(a, 2 * v + 2, tm + 1, tr, val, idx);
            segtree[v] = max(segtree[2 * v + 1], segtree[2 * v + 2]);
        }
    }

    int query(vector<int>& a, int v, int tl, int tr, int l, int r)
    {
        if (tl >= l && tr <= r) return segtree[v];
        if (tl > r || l > tr) return 0;
        int tm = (tl + tr) / 2;
        int x = query(a, 2 * v + 1, tl, tm, l, r);
        int y = query(a, 2 * v + 2, tm + 1, tr, l, r);
        return max(x, y);
    }
    int lengthOfLIS(vector<int>& nums, int k) {
        int n = nums.size();
        int m = 0;
        for (auto& x : nums) m = max(m, x);
        //defining vector with size max element of array + 1
        vector<int> a(m + 1);
        //building segtree
        build(a, 0, 0, m);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int left = max(0, nums[i] - k);
            // querying segtree in range nums[i]-k to nums[i]-1
            int mx = query(a, 0, 0, m, left, nums[i] - 1);
            //updating segtree
            if (mx >= a[nums[i]]) update(a, 0, 0, m, mx + 1, nums[i]);
            ans = max(ans, mx + 1);
        }
        return ans;
    }
};
