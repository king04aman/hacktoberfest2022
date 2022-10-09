#define null NULL
#define Node TreeNode
int itr;
Node* helper(int l, int h, unordered_map<int, int>&mp, vector<int>&preorder) {
    if (l > h) {
        if (l - h <= 1)
            return new Node(preorder[itr++]);
        return null;
    }
    Node* root = new Node(preorder[itr++]);
    int idx = mp[preorder[itr]];
    root->left = helper(l, idx - 1, mp, preorder); //Don't include idx as that is the index of the root
    root->right = helper(idx + 1, h - 1, mp, preorder); //Don't include h as well as that is again the root.

    return root;
}

TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
    int n = preorder.size();
    unordered_map<int, int>mp; //value with its index of inorder
    for (int i = 0; i < n; ++i)
        mp[postorder[i]] = i;
    itr = 0;
    return helper(0, n - 2, mp, preorder); //Don't pass n-1 as it is the root
}