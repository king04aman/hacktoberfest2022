#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void dreamoon(int q,int c1,int c2,int* total,int* actual)
{
	if(q==0)
	{
		if(c2==c1)
		(*actual)++;
		return;
	}	
	else
	{
		(*total)++;
		dreamoon(q-1,c1,c2+1,total,actual);//here we are sending the address of actual and total so it will not change on returning
		dreamoon(q-1,c1,c2-1,total,actual);
	}
}
int main()
{
	int i,c1=0,c2=0,q=0,total=1,actual=0;
	string s1,s2;
	double p;
	cin>>s1>>s2;
	for(i=0;i<s1.length();i++)
	{
		if(s1[i]=='+')
		c1++;
		else
		c1--;
		if(s2[i]=='+')
		c2++;
		else if(s2[i]=='-')
		c2--;
		else
		q++;
	}
	if(q!=0)
	{
		dreamoon(q,c1,c2,&total,&actual);
		p=(double)actual/total;
		cout<<setprecision(12)<<p;
	}
	else
	{
		if(c1==c2)
		cout<<"1.0000000000";
		else
		cout<<"0.0000000000";
	}
}
