#include <iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int key)
{
    int mid = s+(e-s)/2;
    // base case
    // element not found
    if (s > e)
    {
        return false;
    }
    // element found
    if(arr[mid] ==key){
        return true;
    }

    // int mid = s + (e - s) / 2;
    if (arr[mid] < key)
    {
        binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        binarySearch(arr, s, mid-1, key);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    int key = 1;
    bool ans = binarySearch(arr, 0, 5, key);
    cout<<"Present or Not : "<<binarySearch(arr, 0, 5, key)<<endl;
    // if (ans)
    // {
    //     cout << "Element is Present" << endl;
    // }
    // else
    // {
    //     cout << "Element is Absent" << endl;
    // }
    return 0;
}