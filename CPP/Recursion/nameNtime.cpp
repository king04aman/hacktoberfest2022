#include <iostream>
using namespace std;

void printName(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }

    cout << "Rahul" << endl;
    // recursive case
    printName(n - 1);
}

int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    printName(n);
    return 0;
}