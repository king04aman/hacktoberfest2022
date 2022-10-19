#include <iostream>
#include <vector>
#include <queue>
using namespace std;
template <typename t>
class tree
{
public:
    t data;
    vector<tree<t> *> children;
    tree(t data)
    {
        this->data = data;
    }
};
tree<int>*takeinput()
{
    int rootdata;
    cout<<"enter the root data"<<endl;
    cin>>rootdata;
    tree<int>*root=new tree<int>(rootdata);
    queue<tree<int>*>s;
    s.push(root);
    while(s.size()!=0)
    {
        tree<int>*child=s.front();
        s.pop();
        int num;
        cout<<"enter the number of children of "<<child->data<<endl;
        cin>>num;
        for(int i=0;i<num;i++)
        {
            int childdata;
            cout<<"enter "<<i<<"th children of "<<child->data<<endl;
            cin>>childdata;
            tree<int>*node=new tree<int>(childdata);
            child->children.push_back(node);
            s.push(node);
        }
    }
    return root;
}
void display(tree<int>*root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<" ";
    }
    cout<<endl;
     for(int i=0;i<root->children.size();i++)
     {
         display(root->children[i]);
     }
}
int main()
{
    tree<int>*root=takeinput();
    display(root);
}