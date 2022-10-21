#include<bits/stdc++.h>

using namespace std;

int main()
{
  int num, r, sum=0;
    
  cout<<" Input a number: ";
  
  cin>>num;
  
  while(num > 0) 
  {
     r = num % 10;
      
     num = num / 10;
      
     sum = sum + r;
  }
  
  cout<<" The sum of digits of the number is : "<<sum<<endl;
  
  return 0;
  
}
