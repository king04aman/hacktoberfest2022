#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("enter the number to check :");
    scanf("%d", &n);
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    //printf("%d sum , %d n",sum,n);
    if (sum == n)
    {
        printf("It is a perfect number");
    }
    else
    {
        printf("Not a perfect number");
    }
    return 0;
}