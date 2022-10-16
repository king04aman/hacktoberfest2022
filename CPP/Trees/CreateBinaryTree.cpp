#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        // declaration of synatx of binary tree
        int data;
        node *left;
        node *right;

        // constructor 
        node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }

};

// Create a binary tree
node* createTree(node* root){
    int data;
    cout<<"Enter the data: ";
    cin>>data;
    root = new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter the data for inserting left: "<<data<<endl;
    root->left = createTree(root->left);
    cout<<"Enter the data for inserting right: "<<data<<endl;
    root->right = createTree(root->right);

    return root;
}

// Inorder Traversal --- LNR
void inOrderTraversal(node* root){

    if(root==NULL){
        return ;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

// Preorder Traversal --- NLR
void preOrderTraversal(node* root){

    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

// Postorder Traversal --- LRN
void postOrderTraversal(node* root){

    if(root==NULL){
        return ;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}


int main(){

    node* root = NULL;
    root = createTree(root);

    cout<<"InOrder Traversal: "<<endl;
    inOrderTraversal(root);

    cout<<"PreOrder Traversal: "<<endl;
    prelevelOrderTraversal(root);

    cout<<"PostOrder Traversal: "<<endl;
    postOrderTraversal(root);
    
    return 0;
}
