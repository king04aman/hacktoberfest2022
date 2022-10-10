// https://leetcode.com/problems/range-sum-of-bst/

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans = 0;
        queue<TreeNode*> q;
        
        q.push(root);
        
        while(!q.empty())
        {
            TreeNode * curr = q.front();
            q.pop();
            
            if(curr -> left != NULL)
                q.push(curr -> left);
            
            if(curr -> right != NULL)
                q.push(curr -> right);
            
            if(curr -> val >= low && curr -> val <= high)
                ans += curr -> val;
        }
        
        return ans;
    }
};

// ## Recursive

class Solution {
public:
    int sum ;
    
    void solver(TreeNode * root, int l, int h)
    {
        if(root){
            if(root -> val >=l && root -> val <= h)
                sum += root -> val;
            
            solver(root -> left, l, h);
            solver(root -> right, l, h);
        }
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        this -> sum = 0;
        solver(root, low, high);
        
        return sum;
    }
};