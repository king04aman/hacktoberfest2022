// Write a program to print the Floyds triangle.
// My github username : saurav1207

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "How many row you want to print : ";
    cin >> n;

    int row = 1;
    int count = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << count<<" ";
            count = count + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}