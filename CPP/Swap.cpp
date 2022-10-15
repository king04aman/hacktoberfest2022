//Write a program to swap the values of two variables.
#include<iostream>
using namespace std;
int main ()
{
	int a,b;
	cout<<"enter two numbers"<<endl;
	cin>>a>>b;
	if(a!=b)
{
a=a+b;
b=a-b;
a=a-b;
cout<< "After swapping the values,"<<"value of a is:"<<a<<"and value of b is:"<<b;
}
else
cout<<"two number are eqaul";
}
