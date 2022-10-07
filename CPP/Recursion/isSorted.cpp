#include <iostream>
using namespace std;
bool isSorted(int arr[], int size)
{
    // base test case

    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainPart = isSorted(arr + 1, size - 1);
        return remainPart;
    }
}

// recursive call

int main()
{
    int arr[] = {10, 9, 9, 9, 9};
    int size = 5;

    bool ans = isSorted(arr, size);

    if (ans)
    {
        cout << "Array is Sorted" << endl;
    }
    else
    {
        cout << "Array is not Sorted" << endl;
    }

    return 0;
}