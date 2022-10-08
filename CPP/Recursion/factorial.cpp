#include <iostream>
using namespace std;

int factorial(int n)
{
    // base case of recursive function
    if (n == 0)
    {
        return 1;
    }
    // basic Understanding of recursion
    // int smallerproblem = factorial(n - 1);
    // int biggerProblem = n * smallerproq`blem;
    // return biggerProblem;

    return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    int ans = factorial(n);
    cout << "Factorial of " << n << " : " << ans;

    return 0;
}