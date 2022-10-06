#include <stdio.h>
#include <math.h>
int dec_bin(int n);
int oct_bin(int n);
int dec_oct(int n);
int oct_dec(int n);
int bin_oct(int n);
int bin_dec(int n);

int dec_bin(int n)
{
    int i = 0, num = n, bin = 0;
    for (i = 0; num > 0; i++, num /= 2)
    {
        bin += ((num % 2) * pow(10, i));
    }
    return (bin);
}
int dec_oct(int n)
{
    int i = 0, num = n, oct = 0;
    for (i = 0; num > 0; i++, num /= 8)
    {
        oct += ((num % 8) * pow(10, i));
    }
    return (oct);
}
int bin_dec(int n)
{
    int i, num = n, dec = 0;
    for (i = 0; num > 0; i++, num /= 10)
    {
        dec += num % 10 * pow(2, i);
    }
    return (dec);
}
int oct_dec(int n)
{
    int i, num = n, dec = 0;
    for (i = 0; num > 0; i++, num /= 10)
    {
        dec += num % 10 * pow(8, i);
    }
    return (dec);
}
int oct_bin(int n)
{
    return (dec_bin(oct_dec(n)));
}
int bin_oct(int n)
{
    int num = n;
    return (dec_oct(bin_dec(num)));
}

int main()
{
    int ch, n;
    char w;

    do
    {
        printf("\n\t CONVERSION MENU\n\n1-Decimal to Binary \n2-Binary to Decimal\n3-Decimal to Octal \n4-Octal to Decimal \n5-Octal to Binary \n6-Binary to Octal\n ");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        printf("Enter the number :");
        scanf("%d", &n);

        switch (ch)
        {
        case 1:
            printf("%d (base 10) = %d (base 2)", n, dec_bin(n));
            break;
        case 2:
            printf("%d (base 2) = %d (base 10)", n, bin_dec(n));
            break;
        case 3:
            printf("%d (base 10) = %d (base 8)", n, dec_oct(n));
            break;
        case 4:
            printf("%d (base 8) = %d (base 10)", n, oct_dec(n));
            break;
        case 5:
            printf("%d (base 8) = %d (base 2)", n, oct_bin(n));
            break;
        case 6:
            printf("%d (base 2) = %d (base 8)", n, bin_oct(n));
            break;
        default:
            printf("Invalid choice");
        }
        fflush(stdin);
        printf("\nDo you want to continue ? ");
        scanf("%c", &w);
        
    }while(w != 'y');

    return 0;
}