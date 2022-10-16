// Write a program to print the Fibonacci series up to a given number.
// My github username : saurav1207

#include<iostream>
using namespace std;

int fibonacci(int n) {
  int a = 0, b = 1;
  int nextNumber = 0;

  cout<<a << " " <<b << " ";

  for (int i = 2; i <= n; i++) {
    if (i==n) {
      return nextNumber;
    }

    nextNumber = a+b;
    a = b;
    b = nextNumber;
    cout<<nextNumber << " ";
  }
  return 0;
}

int main() {
  int n;
  cout<< "Enter a number : ";
  cin>>n;

  int ans = fibonacci(n);
  cout<<endl <<"Answer is : "<<ans<<endl;
  return 0;
}