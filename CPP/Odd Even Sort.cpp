//------ AI Programming ---------
// Odd Even Sort Algorithm
// Join our underground coding movement @freecodecs (c) June, 2019.

#include <iostream>
#include <vector>

using namespace std;

void oddEven(vector<int> &arr, int size)
{
	bool sorted = false;
	while( ! sorted )
	{
		sorted = true;
		for(int i = 1; i < size-1; i += 2)//Odd
		{
			if(arr[i] > arr[i+1])
			{
				swap(arr[i], arr[i+1]);
				sorted = false;
			}
		}

		for(int i = 0; i < size-1; i += 2)//Even
		{
			if(arr[i] > arr[i+1])
			{
				swap(arr[i], arr[i+1]);
				sorted = false;
			}
		}
	}
}

void show(vector<int> A, int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << A[i] << ", ";
}


int main()
{
	int size, temp;
	cout << "\nEnter the size of elements : ";
	cin >> size;

	vector<int> arr;

	cout<<"\nEnter the unsorted elements : ";

	for (int i = 0; i < size; ++i)
	{
		cin >> temp;
		arr.push_back(temp);
	}

	oddEven(arr, size);

	cout<<"\nSorted elements are: ";
	show(arr, size);
	return 0;
}
