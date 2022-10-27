#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    struct node* next;
}*top;

void push(){
    struct node *temp=(struct node*)malloc(sizeof (struct node));
    cout<<"Enter value to be inserted:";
    cin>>temp->data;
    temp->next=top;
    top=temp;
    cout<<"Element "<<temp->data<<" has been pushed into the stack.";
}

void pop(){
    if(top==NULL)
    {
        cout<<"Stack underflow";
        return;
    }
    else
    {
        struct node*temp;
        temp=top;
        top=temp->next;
        cout<<"Element "<<temp->data<<" has been popped from the stack.";
        free(temp);
    }
}

void display(){
    if(top==NULL)
    {
        cout<<"Stack is empty.";
        return;
    }
    else
    {
        cout<<"The stack is:";
        struct node* temp;
        temp = top;
        cout<<temp->data<<"<--top";
        temp = temp->next;
        while(temp!= NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
}

int main(){
    int ch,choice;
    while(ch!=0)
    {   cout<<"\nEnter operation to be performed in Stack:\n1.Push\n2.Pop\n3.Display\n";
        cin>>choice;
        switch(choice)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            default: cout<<"Invalid choice";
        }
        cout<<"\nWant to perform more operations? Enter 1 for yes 0 for no.";
        cin>>ch;
    }
return 0;
}
