// Program Written by minhaj-313
#include <bits/stdc++.h> //A header file which includes each and every library of C++
using namespace std;

int main()
{
  int decimal, binary = 0, remainder, product = 1,n;
  cin >> decimal;
  n=decimal;
  while (decimal != 0) //While number is not equal to zero
  {
    remainder = decimal % 2; //Store the remainder, when number is divided by 2
    binary = binary + (remainder * product); //Forming the number in binary form
    decimal = decimal / 2;
    product *= 10;
  }
  cout << "Binary form of "<<n<<" is: "<< binary;
  return 0;
}