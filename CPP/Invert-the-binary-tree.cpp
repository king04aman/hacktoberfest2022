//contributor's name:stuti1001
//Invert a binary tree
//Time Complexity: O(n)

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
TreeNode* Solution::invertTree(TreeNode* A) {
    if(A==NULL) return A;
    if(A->left||A->right){
        TreeNode* temp=A->right;
        A->right=A->left;
        A->left=temp;
    }
    invertTree(A->left);
    invertTree(A->right);
    return A;
}
