#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,d,f;
    cout<<"Enter A number to check Armstrong:";
    cin>>n;
    f=n;
    while(f!=0)
    {
        d=f%10;
        s=s+(d*d*d);
        f=f/10;
    }
    if(n==s)
       cout<<"ARMSTRONG"<<endl;
    else
        cout<<" NOT ARMSTRONG"<<endl;
        return 0;
}