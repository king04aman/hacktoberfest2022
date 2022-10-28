#include<stdio.h>
#include<stdlib.h>
void linearsort(int *x,int size){
    int oep,iep,e,f,g;
    oep=size-2;
    iep=size-1;
    for ( e = 0; e<= oep; e++)
    {
        for ( f = e+1; f<=iep; f++)
        {
            if (x[f]<x[e])
            {
                g=x[e];
                x[e]=x[f];
                x[f]=g;
            }  
        }    
    }
}
int main(){
    int req,*x;
    printf("enter your requirement: ");
    scanf("%d",&req);
    if (req<0)
    {
        printf("invalid requirement");
        return 0;
    }
    x=(int*)malloc(sizeof(int)*req);
    for (int i = 0; i < req; i++)
    {
        printf("enter the number: ");
        scanf("%d",&x[i]);
    }
    linearsort(x,req);
    for (int i = 0; i < req; i++)
    {
        printf("%d\n",x[i]);
    }
    free(x);
    return 0;
}
