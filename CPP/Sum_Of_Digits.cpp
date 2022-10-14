#include <iostream>
using namespace std;
int main()
{
    int n;
    // Taking input of the number from the user.
    cout << "Enter the number" << endl;
    cin >> n;
    int sum = 0;
    while (n > 0)
    {
        int p = n % 10;
        sum = sum + p;
        n = n / 10;
    }
    cout << sum << endl;
}