#include <bits/stdc++.h>
#include<iostream>
using namespace std;
 int n;

bool isPowerOfTwo(int n)
{
    return (ceil(log2(n)) == floor(log2(n)));
}
 
int main()
{
    cout<<"Enter the number";
    cin>>n;
    isPowerOfTwo(n) ? cout << "Yes" << endl : cout << "No" << endl;
 
    return 0;
}
 