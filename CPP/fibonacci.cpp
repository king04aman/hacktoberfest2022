//github - akrishna5

#include <iostream>  
using namespace std;

int main()
{  
  int n1=0,n2=1,n3,i,number;    
 cout<<"Enter the number of elements: ";    
 cin>>number;
  
   //printing 0 and 1 
 cout<<n1<<" "<<n2<<" ";
  
   //loop starts from 2 because 0 and 1 are already printed
 for(i=2;i<number;++i)     
 {    
  n3=n1+n2;    
  cout<<n3<<" ";    
  n1=n2;    
  n2=n3;    
 }    
   return 0;  
   }  
