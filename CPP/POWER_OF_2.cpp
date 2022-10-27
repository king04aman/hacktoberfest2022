// Coded by Kavya2719

// Write a program to know if the inputted number is a power of 2 or not

#include <iostream>
#include <cmath>
using namespace std;

#define yes cout << "YES, Inputted Number is a power of 2\n"
#define no cout << "NO, Inputted Number is not a power of 2\n"

void Method1(int n){
   while(n>1 && (n%2)==0){
     n/=2;
   }
   if(n>1) no;
   else yes;
   
   // a power of 2 is fully divisble by 2
   // so we are dividing n by 2 if it is divisible, if its not divisible by 2 at any point and n>1 that means
   // n is not a power of 2
   // if n gets reduced to 1 it means n is fully divisible
}

void Method2(int n){
  int a = log2(n);
  if((1ll << a) == n) yes;
  else no;
  
  // 1<<a means 2^a stored in int
  // 1ll means long long
  // 1ll<<a means 2^a stored in long long
  // Time Complexity - O(logN)
}

void Method3(int n){
  for(int i=0;i<64;++i){
     if((1ll<<i) == n){
       yes; return; 
     }
  }
  no;
  
  // Time Complexity - O(64)
  // we are creating every power of 2 we can make and seeing if our n is equal to any power of 2 or not
}

void Method4(int n){
  if(n&(n-1)) no;
  else yes;
  
  // Time Complexity - O(1)
  // if u notice the binary of every power of 2
  // they will go like
  // 100 , 1000 , 10000 , 100000 (4,8,16,32....)
  // and n-1 will be
  //  11,   111,.  1111 ,  11111 (3,7,15,31....)
  // doing & Operation will give zero
  
  // Conclusion - if((n&(n-1)) == 0) then its power of two
  // else not
}


int main()
{
   long long n;
   cin >> n;
   // Taking Input
   
   Method1(n);
   Method2(n);
   Method3(n);
   Method4(n);
   // Calling all Functions
}
