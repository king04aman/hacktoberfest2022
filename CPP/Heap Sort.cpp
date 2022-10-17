//------ AI Programming ---------
// Heap Sort Algorithm
// Join our underground coding movement @freecodecs (c) June, 2019.

#include <iostream>
using namespace std;

void max_heapify(int *a, int i, int n)
{
	int j, temp;
	temp = a[i];
	j = 2 * i;
	while (j <= n)
	{
		if (j < n && a[j + 1] > a[j])
			j = j + 1;
		if (temp > a[j])
			break;
		else if (temp <= a[j])
		{
			a[j / 2] = a[j];
			j = 2 * j;
		}
	}
	a[j / 2] = temp;
	return;
}
void heapsort(int *a, int n)
{
	int i, temp;
	for (i = n; i >= 2; i--)
	{
		temp = a[i];
		a[i] = a[1];
		a[1] = temp;
		max_heapify(a, 1, i - 1);
	}
}
void build_maxheap(int *a, int n)
{
	int i;
	for (i = n / 2; i >= 1; i--)
	{
		max_heapify(a, i, n);
	}
}
int main()
{
	int n, i, x;
	cout << "Enter size of elements: ";
	cin >> n;
	int a[n];
	for (i = 1; i <= n; i++)
	{
		cout << "\n Enter Element " <<i;
		cin >> a[i];
	}
	build_maxheap(a, n);
	heapsort(a, n);
	cout << "\n Sorted elements are: ";
	for (i = 1; i <= n; i++)
	{
		cout << a[i] <<", ";
	}
	return 0;
}