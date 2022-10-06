// program to count no. of vowels and digits in a string
#include <stdio.h>
#include <ctype.h>
int main()
{
    int i, vowel = 0, digit = 0;
    char s[100], str[100];
    printf("Enter the string :");
    gets(s);

    for (i = 0; s[i] != '\0'; i++)
    {
        str[i] = toupper(s[i]);

        if ((str[i] == 'A') || (str[i] == 'E') || (str[i] == 'I') || (str[i] == 'O') || (str[i] == 'U'))
        {
            vowel++;
        }
        else if ((s[i] == '1') || (s[i] == '2') || (s[i] == '3') || (s[i] == '4') || (s[i] == '5') || (s[i] == '6') || (s[i] == '7') || (s[i] == '8') || (s[i] == '9') || (s[i] == '0'))
        {
            digit++;
        }
        else
        {
        }
    }
    str[i] = '\0';

    printf(str);
    printf("Vowels = %d\nDigits = %d", vowel, digit);

    return 0;
}