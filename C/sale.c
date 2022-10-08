#include<stdio.h>
void main()
{
int yn='Y';
int cntr=1;
do{
int n=0;
printf("1. Ice-Cream\n2. Dairy Milk\n3. Candys\n4. Tuffils\nEnter choice: ");
int ch;
scanf("%d",&ch);
int a,b,c=0;

switch(ch)
{
case 1:
case 2:
case 3:
case 4:
printf("Item %d\n",cntr);
printf("Enter the quantity of item sold in first two days: ");
scanf("%d%d",&a,&b);
printf("Enter the number of days: ");
scanf("%d",&n);
if(n<0)
n=n*-1;
for(int i=1;i<=n;i++)
{
if(i==1)
printf("%d\n",a);
else if(i==2)
printf("%d\n",b);
else
{
c=a+b;
a=b;
b=c;
printf("%d\n",c);
}
}
cntr=cntr+1;
break;
default:
printf("Invalid choice\n");
break;
}
printf("Do you want to continue (1/0)? ");
scanf("%d", &yn);

}while(yn==1);
}
