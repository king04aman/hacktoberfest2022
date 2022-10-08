#include <iostream>
using namespace std;
void printArray(int arr[], int n){
    cout<<"Size of Array : "<<n<<endl;

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



bool linerSearch(int arr[], int size, int key)
{
    printArray(arr, size);
    // base case
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remainPart = linerSearch(arr + 1, size - 1, key);
        return remainPart;
    }
}

int main()
{
    int arr[] = {11, 9, 2, 1, 6, 3, 4};
    int size = 7;
    int key = 11;
    bool ans = linerSearch(arr, size, key);
    if (ans)
    {
        cout << "Element is Present" << endl;
    }
    else
    {
        cout << "Element is Absent" << endl;
    }
    return 0;
}