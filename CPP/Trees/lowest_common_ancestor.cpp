#include <iostream>

using namespace std;
 //Definition for a binary tree node.
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root){
            if (root->val==p->val || root->val==q->val) return root;
            TreeNode *x=lowestCommonAncestor(root->left,p,q);
            TreeNode *y=lowestCommonAncestor(root->right,p,q);
            if (x && y) return root;
            if (x) return x;
            if (y) return y;
            else return nullptr;
        }
        else{
            return nullptr;
        }
    }
};