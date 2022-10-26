#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter no. of rows : ");
    scanf("%d",&r);
    printf("Enter no. of columns : ");
    scanf("%d",&c);
    int A[r][c],B[r][c],D[r][c];
    printf("Enter elements of first Array-'A' : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&A[i][j]);
    }
    printf("Enter elements of second Array-'B' : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&B[i][j]);
    }
    printf("Array-'A' : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d\t",A[i][j]);
        printf("\n");
    }
    printf("Array-'B' : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d\t",B[i][j]);
        printf("\n");
    }
    printf("Addition Result Matrix - 'A+B' : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d\t",A[i][j]+B[i][j]);
        printf("\n");
    }
    return 0;
}