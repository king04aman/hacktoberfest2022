#include <stdio.h>

int    palindrome_fun(int);
int main()
{
    int num,flag;
    printf("Enter any number\n");
    scanf("%d",&num);
    flag=palindrome_fun(num);
        if(flag==1)
            printf("It is a palindrome number\n");
        else
            printf("It is not a palindrome number\n");
    
    return 0;
}

int    palindrome_fun(int a)
{
    int count=0,n,sum=0,r,half,i=0;
    n=a;
    while(a>9)
    {
        r=a%10;
        count++;
        a=a/10;
    }
    count++;
    a=n;
    half=count/2;
    if(count%2==0)
    {
        while(half>i)
        {
            r=a%10;
            i++;
            sum=sum*10+r;
            a=a/10;
        }
    }
    else
    {
        while(half>i)
        {
            r=a%10;
            i++;
            sum=sum*10+r;
            a=a/10;
        }
        a=a/10;
    }
    if(sum==a)
        return(1);
    else
        return(0);
}





