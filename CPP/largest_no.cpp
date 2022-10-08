#include<iostream>
using namespace std;

int main()
    {
        int a,b,c;
        cout<<"Welcome to this, Enter three numbers to compare"<<endl;
        cin>>a>>b>>c;
        if(a>b && a>c)
        {
            cout<<a<<" is the largest number among all the number"<<endl;
        }
        else if(b>a && b>c)
        {
            cout<<b<<"is the largest number among all the numbers"<<endl;
        }
        else
        {
            cout<<c<<"is the largest number among all the numbers"<<endl;
        }
        return 0;
    }
