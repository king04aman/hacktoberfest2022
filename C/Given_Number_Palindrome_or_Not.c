#include<stdio.h>

int main(){
    int num,reversed_num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    int num_copy = num;
    while(num != 0){
        int remainder = num % 10;
        reversed_num = (reversed_num*10) + remainder;
        num /= 10;
    }
    if(reversed_num == num_copy){
        printf("%d is a palindrome",num_copy);
    }
    else{
        printf("%d is not a palindrome",num_copy);
    }
    return 0;
}
