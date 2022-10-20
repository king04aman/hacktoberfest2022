#include<iostream>
using namespace std;
int main()
{
	
	int arr1[3][3], arr2[3][3], arr3[3][3], sub, i, j;
	cout<<"Enter 3*3 Array 1 Elements : ";
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cin>>arr1[i][j];
		}
	}
	cout<<"Enter 3*3 Array 2 Elements : ";
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cin>>arr2[i][j];
		}
	}
	cout<<"Subtracting array (array1-array2) ... \n";
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			arr3[i][j]=arr1[i][j]-arr2[i][j];
		}
	}
	cout<<"Result of Array1 - Array2 is :\n";
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<arr3[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

// code contributed by Priyanshu Trivedi
