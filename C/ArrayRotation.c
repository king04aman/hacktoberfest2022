#include<stdio.h>

int main()
{
    int i, j, k, n=5, arr[n], temp;

    printf("Enter the element of an array: \n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter the number of rotation: \n");
    scanf("%d",&k);
    k=k%n;

    printf("Array before rotation: \n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    while(k!=0)
    {
        temp=arr[0];
        for(j=0;j<(n-1);j++)
        arr[j]=arr[j+1];
        arr[n-1]=temp;
        k=k-1;
    }

    printf("\n Array after rotation: \n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}
