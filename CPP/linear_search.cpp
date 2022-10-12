//ankitranjan1028

#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

int main()
{
    int n,x;
    cout<<"Enter the size of the array\n";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search for\n";
    cin>>x;
	int index = search(arr, n, x);
	if (index == -1)
		cout << "Element is not present in the array";
	else
		cout << "Element found at position " << index;

	return 0;
}

