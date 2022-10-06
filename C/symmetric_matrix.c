#include <stdio.h>
int n;
int isSymmetric(int ar[][n]);

int isSymmetric(int ar[][n])
{
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ",ar[i][j]);
            if (ar[i][j] != ar[j][i])
            {
                f++;
            }
        }
        printf("\n");
    }
    return f;
}
int main()
{

    printf("Enter no. of rows and columns of the matrix :");
    scanf("%d", &n);
    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d elements of %dth row\n", n, i + 1);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if (isSymmetric(a) > 0)
    {
        printf("It is a Symmetric matrix");
    }
    else
    {
        printf("It is not a Symmetric matrix");
    }
    return 0;
}