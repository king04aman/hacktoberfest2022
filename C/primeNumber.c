#include <stdio.h>

int main(){
int n;
printf("enter a number: ");
scanf("%d",&n);
int count =0;
for(int i=1; i<=n; i++){
if(n%i == 0){
    count++;
}
}
if(count == 2){
    printf("the number %d is prime",n);
}else{
    printf("the number is not prime");
}

    return 0;
}