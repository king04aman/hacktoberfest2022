#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

int numberOfNodes(Node *root)
{
    if (root == NULL)
        return 0;
    return numberOfNodes(root->left) + numberOfNodes(root->right) + 1;
}

int numberOfNodesIterative(Node *root)
{
    if (root == NULL)
        return 0;
    queue<Node *> q;
    q.push(root);
    int cnt{};
    while (!q.empty())
    {
        int s = q.size();
        cnt += s;
        for (int i = 0; i < s; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
    return cnt;
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(10);
    root->right = new Node(15);
    root->left->left = new Node(20);
    root->left->right = new Node(25);
    root->right->right = new Node(30);

    cout << numberOfNodes(root) << '\n' << numberOfNodesIterative(root) << '\n';
    return 0;
}
