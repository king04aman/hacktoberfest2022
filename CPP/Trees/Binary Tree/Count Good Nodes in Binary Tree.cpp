// https://leetcode.com/problems/count-good-nodes-in-binary-tree/

class Solution {
public:
    void count(TreeNode * root, int &c, vector<int> &path){
        if(root == NULL) return;
        
        path.push_back(root -> val);
        count(root-> left, c, path);
        count(root-> right, c, path);
        
        bool flag = true;
        for(auto i : path){
            if(root->val < i)
                flag = false;
        }
        if(flag and path.size() > 0) c = c + 1;
        
        path.pop_back();
        
    }
    int goodNodes(TreeNode* root) {
        int c = 0;
        vector<int> path;
        count(root, c, path);
        return c;
    }
};