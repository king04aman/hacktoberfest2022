#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node (int value)
    {
        data = value;
        left = right = NULL;
    }
};

int height(Node *root)
{
    if(root == NULL)
        return 0;
    return max(height(root->left), height(root->right)) + 1;
}

int heightIterative(Node *root)
{
    if(root == NULL)
        return 0;
    int h = 0;
    queue<Node *>q;
    q.push(root);
    while(!q.empty())
    {
        int cnt = q.size();
        h++;
        for(int i = 0; i < cnt; i++)
        {
            Node *curr = q.front();
            q.pop();
            if(curr->left != NULL)
                q.push(curr->left);
            if(curr->right != NULL)
                q.push(curr->right);
        }
    }
    return h;
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(10);
    root->right = new Node(15);
    root->left->right = new Node(20);
    root->left->right->right= new Node(30);

    cout << height(root) << '\n';
    cout << heightIterative(root) << '\n';

    return 0;
}
