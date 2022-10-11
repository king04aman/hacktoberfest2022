#include <iostream>
using namespace std;

int main()
{
     int num;

     cout << "Enter a positive number: ";
     cin >> num;



     int sum=0,m;    
  
	while(num>0)    
	{    
		m=num%10;    
		sum=sum+m;    
		num=num/10;    
	}    
	cout<<"Sum is= "<<sum<<endl;    
	return 0;  
}  
