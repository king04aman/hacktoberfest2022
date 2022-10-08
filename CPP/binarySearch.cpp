#include <iostream>
using namespace std;

int BinarySearch(int n, int search, int arr[])
{
    int s = 0;
    int e = n;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (arr[mid] == search)
        {
            return mid;
        }
        else if (arr[mid] < search)
        {
            s = mid + 1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int number;
    cin >> number;
    cout << BinarySearch(n, number, arr);

    return 0;
}