#include<stdio.h>

int main()
{
    int i, j, k, n=5, arr[n], temp[n];

    printf("Enter the element of an array: \n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter the number of rotation: \n");
    scanf("%d",&k);

    printf("Array before rotation: \n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    for(i=0; i<n; i++)
        temp[(i+k)%n] = arr[i];

    printf("\n Array after rotation: \n");
    for(i=0;i<n;i++)
        printf("%d ",temp[i]);

    return 0;
}
