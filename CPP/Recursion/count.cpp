#include <iostream>
using namespace std;

int print(int n)
{
    if (n == 0)
    {
        return 1;
    }
    // decreasing Order Print
    cout << n << " ";
    print(n - 1);
    cout << endl;
    // Increasing Order Print
    cout << n << " ";
}

int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    print(n);
    return 0;
}