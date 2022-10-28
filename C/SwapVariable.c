//Author: WatashiwaSid
//Objective : Swap the value of two variables without using a third variable.

#include<stdio.h>
void main()
{
    int var1, var2;
    printf("Enter number 1 : ");
    scanf("%d", &var1);
    printf("Enter number 2 : ");
    scanf("%d", &var2);
    printf("\n Before swapping \n Number 1 = %d \n Number 2 = %d", var1, var2 );
    var1 = var1+var2;
    var2 = var1-var2;
    var1 = var1-var2;
    printf("\n\n After swapping \n Number 1 = %d \n Number 2 = %d", var1, var2 );

}
