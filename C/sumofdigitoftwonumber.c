
int main ()
{
    int num, sum = 0;
 
    num = 1234;
    printf("The number is = %d\n",num);

    //loop to find sum of digits
    while(num!=0){
        sum += num % 10;
        num = num / 10;
    }
 
    //output
    printf("Sum: %d\n",sum);
 
    return 0;

}