class Solution {
public:
    void levels(TreeNode* node, vector<vector<int>>& ans){
    if(!node) return;

    queue<TreeNode*> q;
    vector<int> v;
    q.push(node);
    q.push(NULL);

    while(q.size() > 1){
        TreeNode* temp = q.front();
        q.pop(); 

        if(temp){
            v.push_back(temp -> val);
            if(temp -> left) q.push(temp -> left);
            if(temp -> right) q.push(temp -> right);
        }

        else{
            q.push(NULL);
            ans.push_back(v);
            v.clear();
        }
    }
        ans.push_back(v);
        // v.clear();
}
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        levels(root, ans);
        return ans;
    }
};

// Leetcode Problem - https://leetcode.com/problems/binary-tree-level-order-traversal/description/
