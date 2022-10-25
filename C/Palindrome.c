//github username - adityasharma270103
#include<stdio.h>
#include<stdlib.h>

typedef struct queue
{
  char ch;  
  struct queue *next;
} node1;

typedef struct stack
{
  char ch;  
  struct stack *next;
  struct stack *prev;
} node2;

node2 *head = NULL;
node2 *cur = NULL;

node1 *front = NULL;
node1 *rear = NULL;

//Function for enqueuing the element one by one in the queue from the end
void enqueue(char character)
{
  node1 *p = NULL;
  p = (node1 *)malloc(sizeof(node1));
  
  p->ch = character;  
  
  p->next = NULL;
  
  if(front == NULL)
  {
    front = p;
  }
  else
  {
    rear->next = p;  
  }
    
  rear = p;
}

//Function for dequeuing the element from the front of the queue one by one
char dequeue()
{   
  char character;
  
  node1 *temp = front;
  front = front->next;
  
  if(front == NULL)
  {
    front = rear = NULL;
  }  
    
  character = temp->ch;  
  
  free(temp);
    
  return (character);
}

//Pushing the element in the stack 
void push(char character)
{
    node2 *p = NULL;
    
    p = (node2 *)malloc(sizeof(node2));
    p->ch = character;  
    p->next = NULL;
       
    if(head == NULL)
    {
      p->prev = NULL;
      head = p;
    }
    else
    {
      p->prev = cur;
      cur->next = p;
    }  
    
    cur = p;
}

//Popping the last element from the stack
char pop()
{
    char character;
    
    node2 *temp = cur;
    cur = cur->prev;
    
    character = temp->ch;
    
    if(cur == NULL)
    {
      head = NULL;
    }  
    else
    {
      cur->next = temp->next;
    }  
      
    free(temp);
    
    return(character);
}

int main()
{
  int flag = 0;
  char str[50];
  
  //Taking the string to check if it is a palindrom as input
  printf("Enter string to check if it's a palindrome : ");
  scanf("%[^\n]s",str);
  
  for(int i=0 ; str[i] != '\0' ; i++)
  {
    enqueue(str[i]);//enqueuing the element
  }  

  while(front != NULL)
  {
    push(dequeue());//pushing the dequeued element from the queue into the stack
  }
  
  while(head != NULL)
  {
    enqueue(pop());//enqueuing the popped element from the stack into the queue
  }
  
  for(int i=0;str[i]!='\0';i++)
  {
    if(dequeue() != str[i])//dequeuing the element from the queue one by one and comparing with the original string
    {
      flag = 0;//If the dequeued character does not match with original respective position string character then flag
      break;   //is step up to 0
    }
    else
    {
      flag = 1;//If the dequeued character does matches with original respective position string character then flag
               //is step up to 1
    }
  }
  
  if(flag == 1)
  {
    printf("The input string is a palindrome\n"); 
  }
  else
  {
    printf("The input string is not a palindrome\n"); 
  }
      
  return 0;
}















