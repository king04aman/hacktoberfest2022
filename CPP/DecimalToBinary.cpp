#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin >> num;
    vector<int> v;
    while(num){
        v.push_back(num%2);
        num/=2;
    }
    reverse(v.begin(),v.end());
    cout << "Binary conversion of the given number in decimal form is: ";
    for(int i=0;i<v.size();i++) cout << v[i];
    

    return 0;
}

Time Complexity : O(n)
Space Complexity : O(1)
