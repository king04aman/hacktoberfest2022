#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[100];
    int c=0;
    while(n!=0)
    {
        a[c++] = n%2;
        n=n/2;
    }
    for(int i=c-1;i>=0;i--){
        cout<<a[i];
    }

    return 0;
}
