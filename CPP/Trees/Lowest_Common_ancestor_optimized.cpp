TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* n1, TreeNode* n2) {
    if(root == NULL)
    return NULL;
   
   if(root == n1 or root == n2)
   return root;
   
   Node *left = lowestCommonAncestor(root->left,n1,n2);  //finds the lca of n1 and n2 in left subtree
   Node *right = lowestCommonAncestor(root->right,n1,n2);  //finds the lca of n1 and n2 in right sutree 
   
   if(left and right)  //if that particular root contains both the nodes then this will be the lca of the the cuurent subtree and return it
   return root;  
   
   if(left == NULL and right)  //if one of them is NULL it means the current subtree with its root as root contains only one of those two nodes
   return right;               // so return the node which it contains.
   if(right == NULL and left)  
   return left;
   
   return NULL;
}