// Time Complexity = O(n^2)
// Space Complexity = O(1)
// Idea: Take larger element to the end by repeatedly swapping the adjacent elements

#include <iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
    for (int times = 1; times < n; times++)
    {
        // Repeated swapping
        for (int i = 0; i < n - times; i++)
        {
            if (a[i] > a[i + 1]) // Comparing adjacent elements
                swap(a[i], a[i + 1]);
        }
    }
}

int main()
{
    system("CLS");
    int arr[] = {-12, 5, 8, 3, 0, 9, -50, -3, -2, -1};
    int n = sizeof(arr) / sizeof(int);
    bubble_sort(arr, n);

    // Print Sorted Array
    for (auto x : arr)
        cout << x << " , ";

    return 0;
}