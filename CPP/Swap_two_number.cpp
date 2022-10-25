// Github username: Shubham Kumar
// Aim: Swap two number program 
// Date: 26-10-2022

// C++ program to swap two
// numbers using Bitwise Operator.
#include<iostream>
using namespace std;

// Driver code
int main()
{
	int a,b;
    cin>>a>>b;

	cout << "Before swaping a = " <<
			a << " , b = " << b << endl;
	
	a = a ^ b;
	b = b ^ a; // b = b ^ (a ^ b) = a
	a = a ^ b; // a = (a ^ b) ^ a = b

	cout << "After swaping a = " <<
			a << " , b = " << b << endl;
	return 0;
}

