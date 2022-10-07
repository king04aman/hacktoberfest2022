#include <iostream>
using namespace std;

int getSum(int arr[], int size)
{
    // base case
    if (size == 0)
    {
        return 0;
    }

    if (size == 1)
    {
        return arr[0];
    }

    // Progressing case
    arr = arr + 1;
    size = size - 1;

    // recursive case
    int remainPart = getSum(arr, size);
    int sum = arr[0] + remainPart;
    return sum;
}

int main()
{
    int arr[] = {10, 10, 10, 10, 10};
    int size = 5;
    //  function call
    int sum = getSum(arr, size);
    cout << "Sum of Array : " << sum;
    return 0;
}