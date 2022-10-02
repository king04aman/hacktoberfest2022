// C++ Program to Insert an element at a specific position in an Array

#include<iostream>
using namespace std;

// Function to insert element at a specific position
void insertElement(int arr[], int n, int x, int pos)
{
	// shift elements to the right
	// which are on the right side of pos
	for (int i = n - 1; i >= pos; i--)
		arr[i + 1] = arr[i];

	arr[pos] = x;
}

// Driver's code
int main()
{
	int arr[15] = { 2, 4, 1, 8, 5 };
	int n = 5;

	cout<<"Before insertion : ";
	for (int i = 0; i < n; i++)
		cout<<arr[i]<<" ";

	cout<<endl;

	int x = 10, pos = 2;

	// Function call
	insertElement(arr, n, x, pos);
	n++;

	cout<<"After insertion : ";
	for (int i = 0; i < n; i++)
		cout<<arr[i]<<" ";

	return 0;
}
