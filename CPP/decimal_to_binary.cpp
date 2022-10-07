// Program Written by hussain6
#include <iostream>
using namespace std;

int main() {
    int decimal_input;

  cout<<"Enter the Decimal Number to Convert it to binary = ";
  cin >> decimal_input;
  int input=decimal_input;
	int binary_output = 0;
  int remain;
  int prod = 1;
  while (decimal_input != 0) {
    remain = decimal_input % 2;
    binary_output = binary_output + (remain * prod);
    decimal_input = decimal_input / 2;
    prod *= 10;
  }
  cout << "Binary of Decimal Number "<<input<<"  = " << binary_output ;
  return 0;
}
