#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int num, var, rem, sum = 0, a = 0;

    printf("Please enter an integer:");
    scanf("%d", &num);

    var = num;

    while (var != 0)
    {
        var = var / 10;
        ++a;
    }

    var = num;

    while (var > 0)
    {
        rem = var % 10;
        sum = sum + pow(rem, a);
        var = var / 10;
    }

    if (sum == num)
    {
        printf("%d is an Armstrong number \n", num);
    }
    else
    {
        printf("%d is not an Armstrong number \n", num);
    }
    return 0;
}