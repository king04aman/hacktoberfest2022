//shwe14101

#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <vector>
#include <queue>
using namespace std;
 

struct Node 
{
    int data;
    struct Node *left, *right;
};

struct Node* newNode(int data)
{
    struct Node* node = new struct Node;
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}


vector<int> rightSideView(Node* root) 
        {
            queue<Node* > q;
            vector<int> ans;
            if(root == NULL)
                return ans;
            q.push(root);
            while(q.size())
            {
                int s=q.size();
                vector<int> v;
                for(int i=0;i<s;i++)
                {
                    Node* x=q.front();
                    q.pop();
                    if(x->left != NULL)
                        q.push(x->left);
                    if(x->right!=NULL)
                        q.push(x->right);
                    v.push_back(x->data);
                }
                int k=v.size();
                ans.push_back(v[k-1]);
            }
            
            
            
            return ans;
        
        }


int main()
{
    
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->right->right = newNode(4);
    root->right->left = newNode(5);
    root->left->right = newNode(6);
    root->left->left = newNode(7);
    root->left->left->right = newNode(9);
    root->left->left->right->left = newNode(8);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(11);
    root->right->left->left = newNode(12);
    root->right->left->right = newNode(13);
    root->right->right->left = newNode(14);
    root->right->right->right = newNode(15);
    
    cout << "Right view of binary tree is \n";
    vector<int> k;
 
    k=rightSideView(root);
    for (int i = 0; i < k.size(); i++) {
            cout << k[i] << " ";
    }
    
}