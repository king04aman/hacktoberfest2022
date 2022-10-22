#include<stdio.h>
#include<conio.h>
void main()
{
    int a[]={1,2,4,5,8};
    int i,j,temp=0,mid,n=5, high=4, low=0,x;
    printf("Enter the element to bbe searched");
    scanf("%d",&x);
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            mid=(low+high)/2;
            if(a[mid]==x)
            printf("Element found");
            else if(a[mid]<x)
            high=mid-1;
            else if(a[mid]>x)
            low=mid+1;

        }
    }
}