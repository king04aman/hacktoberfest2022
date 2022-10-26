// Use this with shared_memory_exp2.c

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
  C c;
  B b;
  A a;
}D;

int main()
{
    int chk,msg_rec_prio;
    //message queue
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

    //shared memory 

    int fd = -1;                     
    int ret_shm = -1;

    fd =  shm_open(SHM,SHM_FLAG, 0777);

    if (fd == -1)
    {
        printf("Errorno = %d\n", errno);
        return -1;
    }
    ret_shm = ftruncate(fd, SHM_SIZE);

    if (ret_shm == -1)
    {
        printf("Errorno = %d \n", errno);
        perror("Error\n");
        return -1;
    }

  ret_mq =  mq_receive(mq, (char *) &chk, sizeof(chk),&msg_rec_prio);

  if(ret_mq == -1)
  {
    perror("Failed to received data in message queue ");
    return -1;
  }
  int new= (int)chk;

  if(new == 1)
  {
    A *aptr = (A *) mmap(NULL, SHM_SIZE, PROT_WRITE,MAP_SHARED,fd, 0);

    if(aptr == MAP_FAILED)
    {
      perror("Mapping is failed ");
      return -1;
    }

    printf("Character data from A : \n");
    printf("A.a: %c\n A.b: %c\n A.c: %c\n A.d: %c \n",aptr->a,aptr->b,aptr->c,aptr->d);

  }
  else if(new == 2)
  {
    B *bptr = (B *) mmap(NULL, SHM_SIZE, PROT_WRITE, MAP_SHARED,fd, 0);

    if(bptr == MAP_FAILED)
    {
      perror("Mapping is failed ");
      return -1;
    }

    printf("Integer data from B : \n");
    printf("B.a: %d\n B.b: %d\n B.c: %d\n B.d: %d \n", bptr->a, bptr->b, bptr->c, bptr->d);
  }
  else if(new == 3)
  {
   C *cptr = (C *) mmap(NULL, SHM_SIZE, PROT_WRITE, MAP_SHARED,fd, 0);

    if(cptr == MAP_FAILED)
    {
      perror("Mapping is failed ");
      return -1;
    }
    printf("String data from C : \n");
    printf("C.a: %s\n C.b: %s\n C.c: %s\n C.d: %s \n", cptr->a, cptr->b, cptr->c, cptr->d);

  }
  else
  {
   D *dptr = (D *) mmap(NULL, SHM_SIZE, PROT_WRITE, MAP_SHARED,fd, 0);

    if(dptr == MAP_FAILED)
    {
      perror("Mapping is failed ");
      return -1;
    }

    printf("A ,B,C  structure data : \n");
    printf("A.a: %c A.b: %c A.c: %c A.d: %c \n",dptr->a.a,dptr->a.b,dptr->a.c,dptr->a.d);
    printf("B.a: %d B.b: %d B.c: %d B.d: %d \n",dptr->b.a, dptr->b.b, dptr->b.c, dptr->b.d);
    printf("C.a: %s C.b: %s C.c: %s C.d: %s \n",dptr->c.a, dptr->c.b, dptr->c.c, dptr->c.d);
  }
  mq_unlink(MQ);
  shm_unlink(SHM);
  return 0;
}

