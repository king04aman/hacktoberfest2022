#include <stdio.h>
int a[10];
int k;
int main()
{
    int i,n;
    void QuickSort(int,int);
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    printf("Enter the element of an array : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    QuickSort(0,n-1);
    printf("The Sorted Array is as follow :");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);

}

void QuickSort(int beg,int end)
{
    int b,e,key,temp;
    b=beg;
    e=end;
    key=a[beg];
    while(b<e)
    {
        while(a[e]>key)
            e--;
            temp=a[e];
            a[e]=a[b];
            a[b]=temp;
        while(a[b]<key)
            b++;
            temp=a[e];
            a[e]=a[b];
            a[b]=temp;
    }

        if(beg<e-1)
            QuickSort(beg,e-1);
        if(b+1<end)
            QuickSort(b+1,end);
}
