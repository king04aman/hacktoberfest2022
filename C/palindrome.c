// To check if the given number is Palindrome or not.

#include <stdio.h>

void palindrome(int n)
{
    int temp, remainder, sum = 0;
    temp = n;
    while(n > 0){
        remainder = n % 10;
        sum = (sum*10) + remainder;
        n = n/10;
    }
    
    if(sum == temp)
    {
        printf("It is a Palindrome number.");
    }
    else
    {
        printf("It is not a Palindrome number."); 
    }
}


int main() 
{
    int n;
    printf("Enter a number to check: ");
    scanf("%d", &n);
    palindrome(n);
    return 0;
}
