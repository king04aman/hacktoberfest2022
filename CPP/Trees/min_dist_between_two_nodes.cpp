int height(Node root, int x) {
    if (root == null)
        return -1;

    if (root.data == x)
        return 0;

    int l = height(root.left, x);
    int r = height(root.right, x);

    if (l == -1 && r == -1)
        return -1;
    else if (l == -1)
        return r + 1;
    else
        return l + 1;
}

Node lca(Node root, int a, int b) {
    if (root == null) //node not found
        return root;

    if (root.data == a || root.data == b)
        return root; // root found return it's address as return type will be Node

    Node left = lca(root.left, a, b);
    Node right = lca(root.right, a, b);

    if (left == null && right == null)
        return null;  //as this subtree's root will be the lca. As both the nodes are found.
    else if (left == null)
        return right; //if not found on the left then return whatever is from right
    else if (right == null)
        return left;  //if not found on the right return whatever anss iss from left
    else
        return root;  //if both are not null then this surely will be the deepest level and in this subtree both
    //nodes are found.
}

int findDist(Node root, int a, int b) {
    Node lca_ = lca(root, a, b);
    int a_h = height(lca_, a);
    int b_h = height(lca_, b);
    return a_h + b_h;
}