#include <stdio.h>
void main()
{
    int num, rem, result = 0, dividend, rev;

    printf(" Enter a number : \n ");
    scanf("%d", &num);

    dividend = num;

    while (dividend != 0)
    {
        rem = dividend % 10;
        result = result * 10 + rem;
        dividend = dividend / 10;
    }

    if (result == num)
        printf(" Is palindrome \n ");
    else
        printf(" Is not palindrome \n ");
}
