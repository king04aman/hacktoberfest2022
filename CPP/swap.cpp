#include<iostream.h>
#include<conio.h>

void main()
{
int a,b,c;
clrscr();
cout<<"Enter value of a: ";
cin>>a;
cout<<"Enter value of b: ";
cin>>b;
c=a;
a=b;
b=c;
cout<<"After swap a: "<<a<<"b: "<<b;
getch();
}
