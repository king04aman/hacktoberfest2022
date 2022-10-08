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

int main()
{
    int arr[5] = {100, 2, 94, 33, 1};
    bubbleSort(arr, 5);
    cout << "Sorted Array : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}