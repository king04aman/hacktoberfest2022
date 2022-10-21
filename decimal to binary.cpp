#include <iostream>
using namespace std;
void DecimalToBinary(int n) {
   int binaryNumber[100], num=n;
   int i = 0;
   while (n > 0) {
      binaryNumber[i] = n % 2;
      n = n / 2;
      i++;
   }
   cout<<"Binary form of "<<num<<" is ";
   for (int j = i - 1; j >= 0; j--)
   cout << binaryNumber[j];
   cout<<endl;
}
int main() {
   DecimalToBinary(15);
   DecimalToBinary(10);
   DecimalToBinary(18);
   DecimalToBinary(27);
   return 0;
}
