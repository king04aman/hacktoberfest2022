#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}node;

node* createNode(int data){
    node *n = (node *)malloc(sizeof(node));
    if(n != NULL){
        n->left = NULL;
        n->right = NULL;
        n->data = data;
    }
    return n;
}
//to create difference in levels of tree
void printtabs(int numtabs){
    for(int i=0; i<numtabs; i++)
    printf("\t");
}
//to display the tree
void printtree_rec(node *root, int level){
    if (root == NULL){
        printtabs(level);
        printf("---<empty>---\n");
        return;
    }
    printtabs(level);
    printf("value = %d\n", root->data);
    printtabs(level);
    printf("left\n");

    printtree_rec(root->left, level+1);
    printtabs(level);
    printf("right\n");

    printtree_rec(root->right, level+1);
    printtabs(level);
    printf("\n");
}

void printtree(node *root){
    printtree_rec(root, 0);
}

int main(){
    node *n1 = createNode(1);
    node *n2 = createNode(2);
    node *n3 = createNode(3);
    node *n4 = createNode(4);
    node *n5 = createNode(5);
    node *n6 = createNode(6);
    node *n7 = createNode(7);
    
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n3->left = n6;
    n3->right = n7;

    printf("\n*** Program to display the tree ***\n\n");
    printtree(n1);
    return 0;
}
