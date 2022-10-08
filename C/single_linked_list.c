#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head=NULL;

void display(struct node *ptr){
    printf("\nElements are: \n");
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}
void create_ll(struct node *ptr, struct node *new)
{
    char ch;
    printf("Do you want to add (y,n) \n");
    scanf(" %c",&ch);
    while(ch=='y')
    {
        new=(struct node *)malloc(sizeof(struct node));
        printf("Enter the new value: \n");
        scanf("%d",&new->data);
        new->next=NULL;
        ptr->next=new;
        ptr=new;
        printf("Do you want to add more values? (y,n) \n");
        scanf(" %c",&ch);
    }
}

void insert_end(){
    struct node *temp;
    struct node *q;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the val for end: \n");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        for(q=head;q->next!=NULL;q=q->next);//just traversing
        q->next=temp;
    }
}

void insert_beg(){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the val for beg: \n");
    scanf("%d",&temp->data);
    temp->next=NULL;

    //main
    temp->next=head;
    head=temp;
}

void insert_pos(){
    struct node *temp;
    struct node *q;
    temp=(struct node *)malloc(sizeof(struct node));
    int pos;
    printf("\nEnter the val at pos: \n");
    scanf("%d",&temp->data);
    printf("Enter the pos: \n");
    scanf("%d",&pos);
    temp->next=NULL;
    if(pos==1){
        temp->next=head;
        head=temp;
    }
    // q=head;
    else if(head!=NULL && pos!=1){
        q=head;
        for(int i = 1;i<pos-1;i++){
            q=q->next;
            if(q==NULL)
                return;//invalid pos
        }
        temp->next=q->next;
        q->next=temp;
        q=head;
    }

}

void insert_after(){
    struct node *temp;
    struct node *q;
    int ele;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the value to insert: \n");
    scanf("%d",&temp->data);
    printf("\nEnter the element to insert after: \n");
    scanf("%d",&ele);

    temp->next=NULL;

    if(head==NULL){
        return;
    }
    else{
        for(q=head;q->data!=ele;q=q->next){
            if(q==NULL)
                return;
            
        }
        temp->next=q->next;
        q->next=temp;
    }
}

//deletion

int del_beg(){
    if(head!=NULL){
        int item;
        struct node *q=head;

        item=head->data;
        head=head->next;
        free(q);
        return item;
    }
}

int del_end(){
    if(head==NULL)
        // return;
        printf("Not possible");

    int item;
    struct node *q=head;
    struct node *prev;

    if(head->next==NULL){
        item = head->data;
        head=NULL;
        free(q);
        return(item);
    }

    else{
        for(q=head;q->next!=NULL;prev=q, q =q->next);
        prev->next=NULL;
        item=q->data;
        free(q);
        return(item);
    }
}

int del_pos(){
    int pos;
    int item;
    struct node *q;
    struct node *prev;
    int i;
    printf("Enter the position to delete from: ");
    scanf("%d",&pos);
    if(head==NULL)
        printf("not possible");
    else if(pos==1){
        // int item;
        q=head;
        head=head->next;
        item=q->data;
        free(q);
        return item;
    }
    else{

        for(q=head,i=1;i<pos;i++){
            prev=q;
            q=q->next;
            if(q==NULL)
                printf("Not possible");
        }
        prev->next=q->next;
        item=q->data;
        free(q);
    }
    
}

int del_ele(){
    int ele,item;
    printf("Enter the element to delete: ");
    scanf("%d",&ele);
    struct node *q;
    struct node *prev;
    if(head==NULL){
        printf("not possible");
    }
    else{
        q=head;
        while(q!=NULL && q->data!=ele){
            prev=q;
            q=q->next;
        }
        prev->next=q->next;
        free(q);
    }
}

void reverse(){
    struct node *p1;
    struct node *p2;
    struct node *p3;
    p1=head;p2=p1->next;p3=p2->next;

    //reversing 1st node
    p1->next=NULL;//so it should point null
    //these 2 are the 1st step
    p2->next=p1;

    while(p3!=NULL){//reversing each element
        p1=p2;
        p2=p3;
        p3=p3->next;
        p2->next=p1;
    }
    head=p2;//moving fwd

}

int main()
{
    //struct node *head;
    struct node *new;
    struct node *ptr;
    //head=NULL;

    new=(struct node *)malloc(sizeof(struct node));
    printf("Enter the value: \n");
    scanf("%d",&new->data);
    new->next=NULL;
    head=new;
    ptr=head;

    create_ll(ptr,new);
    display(head);
    int ans=1;
    while(ans){
        printf("\n1.insert at beg\n");
        printf("2.insert at end\n");
        printf("3.insert at pos\n");
        printf("4.insert after a element\n");
        printf("5.Delete from beg\n");
        printf("6.Delete from end\n");
        printf("7.Delete from pos\n");
        printf("8.Delete an ele\n");
        printf("9.Reverse\n");
        int choice;
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            insert_beg();
            display(head);
            break;
        case 2:
            insert_end();
            display(head);
            break;
        case 3:
            insert_pos();
            display(head);
            break;
        case 4:
            insert_after();
            display(head);
            break;
        case 5:
            del_beg();
            display(head);
            break;
        case 6:
            del_end();
            display(head);
            break;
        case 7:
            del_pos();
            display(head);
            break;
        case 8:
            del_ele();
            display(head);
            break;
        case 9:
            reverse();
            display(head);
            break;
        
        default:
            break;
        }
        printf("\nContinue? 1 || 0: ");
        scanf("%d",&ans);
    }
    
    return 0;
}