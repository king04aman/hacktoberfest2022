#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#include "string.h"
#include "errno.h"
#include "mqueue.h"
#include "sys/types.h"
#include "fcntl.h"
#include "sys/stat.h"
#include "sys/mman.h"


#define MQ_FLAG O_RDWR | O_CREAT
#define MQ "/mq_agn"

#define SHM  "/shm_agn"
#define SHM_FLAG O_RDWR | O_CREAT
#define SHM_SIZE  200

typedef struct
{
    char a;
    char b;
    char c;
    char d;
}A;

typedef struct
{
    int a;
    int b;
    int c;
    int d;
}B;

typedef struct 
{
    char a[20];
    char b[20];
    char c[20];
    char d[20];
}C;

typedef struct
{
  A a;
  B b;
  C c;
}D;

void fillA(A *aptr)
{
  char temp;
  printf("Enter a\n");
  scanf(" %[^\n]%*c", &temp);
  aptr->a = temp;
  printf("Enter b\n");
  scanf(" %[^\n]%*c", &temp);
  aptr->b = temp;
  printf("Enter c\n");
  scanf(" %[^\n]%*c", &temp);
  aptr->c = temp;
  printf("Enter d\n");
  scanf(" %[^\n]%*c", &temp);
  aptr->d = temp;
}

void fillB(B *bptr)
{
  printf("Enter a\n");
  scanf("%d", &(bptr->a));
  printf("Enter b\n");
  scanf("%d", &(bptr->b));
  printf("Enter c\n");
  scanf("%d", &(bptr->c));
  printf("Enter d\n");
  scanf("%d",&(bptr->d));
}

void fillC(C *cptr)
{
  char temp[20];
  printf("Enter a\n");
  scanf(" %[^\n]%*c", temp);
  strcpy(cptr->a, temp);
  printf("Enter b\n");
  scanf(" %[^\n]%*c", temp);
  strcpy(cptr->b, temp);
  printf("Enter c\n");
  scanf(" %[^\n]%*c", temp);
  strcpy(cptr->c, temp);
  printf("Enter d\n");
  scanf(" %[^\n]%*c", temp);
  strcpy(cptr->d,temp);
}

void fillD(D *dptr)
{
  A a; B b; C c;

  char temp;
  printf("Enter a\n");
  scanf(" %[^\n]%*c", &temp);
  a.a = temp;
  printf("Enter b\n");
  scanf(" %[^\n]%*c", &temp);
  a.b = temp;
  printf("Enter c\n");
  scanf(" %[^\n]%*c", &temp);
  a.c = temp;
  printf("Enter d\n");
  scanf(" %[^\n]%*c", &temp);
  a.d = temp;

  printf("Enter a\n");
  scanf("%d",&b.a);
  printf("Enter b\n");
  scanf("%d",&b.b);
  printf("Enter c\n");
  scanf("%d",&b.c);
  printf("Enter d\n");
  scanf("%d",&b.d);
 
  char temp1[20];
  printf("Enter a ");
  scanf(" %[^\n]%*c",temp1);
  strcpy(c.a,temp1);
  printf("Enter b");
  scanf(" %[^\n]%*c",temp1);
  strcpy(c.b,temp1);
  printf("Enter c\n");
  scanf(" %[^\n]%*c",temp1);
  strcpy(c.c,temp1);
  printf("Enter d\n");
  scanf(" %[^\n]%*c",temp1);
  strcpy(c.d,temp1);

  dptr->a = a;
  dptr->b = b;
  dptr->c = c;
}
int main()
{

    mqd_t mq;
    int ret_mq=-1;
    struct mq_attr mqattr;

    mqattr.mq_maxmsg=1;   
    mqattr.mq_msgsize=1;

    mq= mq_open(MQ,MQ_FLAG,0777,&mqattr);    
    if(mq==-1) 
    {
        perror("Error in queue creation\n");
        return -1;
    }

    int fd = -1;                           
    int ret_shm = -1;

    fd =  shm_open(SHM,SHM_FLAG, 0777);

    if (fd == -1)
    {
        printf("Errorno = %d\n", errno);
        perror("Error in share memory creation\n");
        return -1;
    }
    ret_shm = ftruncate(fd, SHM_SIZE);

    if (ret_shm == -1)
    {
        printf("Errorno = %d \n", errno);
        perror("Error\n");
        return -1;
    }

    int ch;

        printf("Enter choices\n");
        printf("Enter 1 to enter and print A structure contents\n");
        printf("Enter 2 to enter and print B structure contents\n");
        printf("Enter 3 to enter and print C structure contents\n");
        printf("Enter 4 to enter and print C,B and A structures contents\n");
        printf("To exit enter 5\n");
        scanf("%d",&ch);

        char newch;
        switch(ch)
        {
            case 1:

                A* aptr=NULL;
                aptr = (A* ) mmap(NULL, SHM_SIZE, PROT_READ | PROT_WRITE,MAP_SHARED,fd,0);

                if (aptr == MAP_FAILED)
                {
                    printf("Errorno = %d \n", errno);
                    return -1;
                }

                fillA(aptr);
                newch=(char)ch;
                ret_mq = mq_send(mq,(const char *)&newch,sizeof(newch),0);

                if (ret_mq == -1)
                {
                    perror("Error sending in MQ\n");
                    return -1;
                }
                 break;
            case 2:

                B* bptr=NULL;
                bptr = (B* ) mmap(NULL, SHM_SIZE, PROT_READ | PROT_WRITE,MAP_SHARED,fd,0);

                if (bptr == MAP_FAILED)
                {
                    printf("Errorno = %d \n", errno);
                    return -1;
                }

                fillB(bptr);
                newch=(char)ch;
                ret_mq = mq_send(mq,(const char *)&newch,sizeof(newch),0);

                if (ret_mq == -1)
                {
                    perror("Error sending in MQ\n");
                    return -1;
                }
                break;

            case 3:

                C* cptr=NULL;
                cptr = (C* ) mmap(NULL, SHM_SIZE, PROT_READ | PROT_WRITE,MAP_SHARED,fd,0);

                if (cptr == MAP_FAILED)
                {
                    printf("Errorno = %d \n", errno);
                    return -1;
                }

                fillC(cptr);
                newch=(char)ch;
                ret_mq = mq_send(mq,(const char *)&newch,sizeof(newch),0);

                if (ret_mq == -1)
                {
                    perror("Error sending in MQ\n");
                    return -1;
                }
                break;

            case 4:

                D* dptr=NULL;
                dptr= (D* )mmap(NULL, SHM_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);

                if (dptr == MAP_FAILED)
                {
                    printf("Errorno = %d \n", errno);
                    return -1;
                }

                fillD(dptr);
                newch=(char)ch;
                ret_mq = mq_send(mq,(const char *)&newch,sizeof(newch), 1);

                if (ret_mq == -1)
                {
                    perror("Error sending in MQ\n");
                    return -1;
                }
                break;
            case 5:
                printf("\nExiting program.......\n");
                exit(0);
        }
            mq_close(mq);
    return 0;
}
