#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    // base case : Already Sorted
    if (n == 0 || n == 1)
    {
        return;
    }

    // sets largest element to last
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    // recursive call
    bubbleSort(arr, n - 1);
}
void print(int a[],int n)
{
    int t;
    for(t=0;t<n;t++)
    {
      cout<<a[t]<<" "; 
    }
    cout<<"\n";
}
int main()
{
    int n;
cout<<"Enter the size of array:";
cin>>n;
int a[n];
cout<<"\nEnter the elements of array:";
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
bubbleSort(a,n);
cout<<"\nSorted array: ";
print(a,n);
return 0;
}
