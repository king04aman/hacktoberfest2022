#include <iostream>
using namespace std;

int revrsNum(int num1, int num2){
  //base case
  if (num1 == 0){
      return num2;
   }
   num2 *= 10;
   num2 += (num1 % 10);
   num1 = num1/10;
  
  //recursive call
   return revrsNum(num1, num2);
}

int main(){
  int Num;
  cout<<"Enter the number to check palindrome or not"<<endl;
  cin>>Num;
   
   int Num2 = revrsNum(Num,0);
   if (Num == Num2){
      cout <<Num<<" is Palindrome!";
   }
   else{
      cout <<Num<<" is not a Palindrome!";
   }
   return 0;
}
