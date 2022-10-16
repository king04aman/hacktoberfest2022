// Given a generic tree, find and return the node with second largest value in given tree.
// Note: Return NULL if no node with required value is present.

void getSecondNode(TreeNode<int>* root, TreeNode<int>**first,TreeNode<int>**second)
{
    if(root==NULL)
        return;
    if(!(*first))
    {
        *first=root;
    }
    else if(root->data>(*first)->data)
    {
         *second=*first;
        *first=root;
       
    }
    else if(!(*second))
    {
        if(root->data<(*first)->data)
        {
            *second=root;
        }
    }
  else  if(root->data<(*first)->data && root->data>(*second)->data)
  {
      *second=root;
  }
    for(int i=0;i<root->children.size();i++)
    {
        getSecondNode(root->children[i], first ,second);
    }
}
TreeNode<int>* getSecondLargestNode(TreeNode<int>* root) {
    // Write your code here
    TreeNode<int>* first=NULL;
    TreeNode<int>* second=NULL;
    getSecondNode(root,&first,&second);
      if (second == NULL)
        return NULL;
 
    // return the second largest element
    return second;
}void getSecondNode(TreeNode<int>* root, TreeNode<int>**first,TreeNode<int>**second)
{
    if(root==NULL)
        return;
    if(!(*first))
    {
        *first=root;
    }
    else if(root->data>(*first)->data)
    {
         *second=*first;
        *first=root;
       
    }
    else if(!(*second))
    {
        if(root->data<(*first)->data)
        {
            *second=root;
        }
    }
  else  if(root->data<(*first)->data && root->data>(*second)->data)
  {
      *second=root;
  }
    for(int i=0;i<root->children.size();i++)
    {
        getSecondNode(root->children[i], first ,second);
    }
}
TreeNode<int>* getSecondLargestNode(TreeNode<int>* root) {
    // Write your code here
    TreeNode<int>* first=NULL;
    TreeNode<int>* second=NULL;
    getSecondNode(root,&first,&second);
      if (second == NULL)
        return NULL;
 
    // return the second largest element
    return second;
}