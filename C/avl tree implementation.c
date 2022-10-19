//AVL tree implementation
#include<stdio.h>
#define ll long long int
struct node
{
	int data;
	struct node* right;
	struct node* left;
	int h;
};
struct node* newnode(int data)
{
	struct node* newn= new node();
	newn->data=data;
	newn->left=newn->right=NULL;
	newn->h=1;
	return newn;
}
int height(struct node*root){
	if(root==NULL)return 0;
	return root->h;
}
struct node* rr(struct node* root){
    int h1,h2,h3,h4;
	struct node* r1=root->left;
    struct node*s2=r1->right;
    r1->right=root;
    root->left=s2;
    h1=height(root->left);
    h2=height(root->right);
    (h1>h2)?(root->h=1+h1):(root->h=1+h2);
    h3=height(r1->left);
    h4=height(r1->right);
    (h3>h4)?(r1->h=1+h3):(r1->h=1+h4);
    return r1;
}
struct node* lr(struct node* root){
	int h1,h2,h3,h4;
	struct node* r1=root->right;
    struct node*s2=r1->left;
    r1->left=root;
    root->right=s2;
    h1=height(root->left);
    h2=height(root->right);
    (h1>h2)?(root->h=1+h1):(root->h=1+h2);
    h3=height(r1->left);
    h4=height(r1->right);
    (h3>h4)?(r1->h=1+h3):(r1->h=1+h4);
    return r1;
}
int bf(struct node* root){
	if(root==NULL)return 0;
	return (height(root->left)-height(root->right));
}
struct node* insert(struct node* root,int data)
{
	if(root==NULL)
	root=newnode(data);
	else if(data<=root->data)
	root->left=insert(root->left,data);
	else if(data>=root->data)
	root->right=insert(root->right,data);
	return root;
	int h1=height(root->left);
	int h2=height(root->right);
	(h1>h2)?(root->h=1+h1):(root->h=1+h2);
	int bal=bf(root);
	// Left Left Case 
    if (bal > 1 && data < root->left->data) 
        return rr(root); 
    // Right Right Case 
    if (bal < -1 && data > root->right->data) 
        return lr(root); 
    // Left Right Case 
    if (bal > 1 && data > root->left->data) 
    { 
        root->left = lr(root->left); 
        return rr(root); 
    } 
    // Right Left Case 
    if (bal < -1 && data < root->right->data) 
    { 
        root->right = rr(root->right); 
        return lr(root); 
    } 
    /* return the (unchanged) root pointer */
    return root; 	
}
void inorder(struct node* root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}
void preorder(struct node* root)
{
	if(root==NULL)
	return;
	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);
}
void postorder(struct node* root)
{
	if(root==NULL)
	return;
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->data);
}
int main()
{
	int d,n;
  struct node* root=NULL;
  printf("Enter no.of elements in tree\n");
  scanf("%d",&n);
  while(n--)
  {
  	printf("enter the element you want to insert:\n");
    scanf("%d",&d);
    root=insert(root,d);
  }
  printf("the inorder traversal is:\n");
  inorder(root);
  printf("\n");
  printf("the preorder traversal is:\n");
  preorder(root);
  printf("\n");
  printf("the postorder traversal is:\n");
  postorder(root);
return 0;
}
