#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node* newnode(struct node* new,int n)
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=n;
	temp->next=NULL;
	if(new==NULL)
	{
		new=temp;
	}
	else
	{
		while(new->next!=NULL)
		{
			new=new->next;
		}
		new->next=temp;
	}
}
void printlist(struct node* head)
{
    head = head->next;
	while (head != NULL) {
		printf("%d ", head->data);
		if (head->next)
			printf("-> ");
		head = head->next;
	}
	printf("\n");
}

// Case 1: Deleting the first element from the linked list
node * deleteFirst(struct node * head){
    struct node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// Case 2: Deleting the element at a given index from the linked list
node * deleteAtIndex(struct node * head, int index){
    struct node *p = head;
    struct node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = q->next;
    free(q);
    return head;
}

// Case 3: Deleting the last element
node * deleteLast(struct node * head){
    struct node *p = head;
    struct node *q = head->next;
    while(q->next !=NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = NULL;
    free(q);
    return head;
}

int main()
{
	int a,data,i,j,x;
    node* head;
	printf("\nEner the size of the linked list: ");
	scanf("%d",&a);
	printf("\nEnter data in the linked list: ");
	for(i=1;i<=a;i++)
	{
		scanf("%d",&data);
		newnode(head,data);
	}
    printf("\nLinked list before deletion :\n");
    printlist(head);
    printf("\nChoose out of given below options :\n");
    printf("Press '1' to Deleting the first element from the linked list\n");
    printf("Press '2' to Deleting the element at a given index from the linked list\n");
    printf("Press '3' to Deleting the last element from the linked list\n");
    printf("\nEnter the option: ");
    scanf("%d",&x);
    switch (x)
    {
    case 1: head = deleteFirst(head);
    printf("\nLinked list after deletion:\n");
    printlist(head);
    break;
    case 2: printf("Enter the index position: ");
    scanf("%d",&j);
    head = deleteAtIndex(head, j);
    printf("\nLinked list after deletion:\n");
    printlist(head);
    break;
    case 3: head = deleteLast(head);
    printf("\nLinked list after deletion:\n");
    printlist(head);
    break;
    default: printf("\nWrong Input !!!\n");break;
    }
    return 0;
}
