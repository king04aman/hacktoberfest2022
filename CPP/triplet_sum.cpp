#include <bits/stdc++.h>
using namespace std;

bool find3Numbers(int A[], int arr_size, int sum)
{
	for (int i = 0; i < arr_size - 2; i++)
	{

	
		for (int j = i + 1; j < arr_size - 1; j++)
		{
			for (int k = j + 1; k < arr_size; k++)
			{
				if (A[i] + A[j] + A[k] == sum)
				{
					cout << "Triplet is " << A[i] <<
						", " << A[j] << ", " << A[k];
					return true;
				}
			}
		}
	}


	return false;
}


int main()
{
	int A[] = { 1, 4, 45, 6, 10, 8 };
	int sum = 22;
	int arr_size = sizeof(A) / sizeof(A[0]);
	find3Numbers(A, arr_size, sum);
	return 0;
}

