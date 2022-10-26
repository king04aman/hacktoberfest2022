#include<iostream>
using namespace std;
void swap (int &num1, int &num2) //&num1 and &bnum2 are Reference variables
{
        int temp;
        temp=num1;
        num1=num2;
        num2=temp;
}
int main()
{
        int a=5,b=10;
        cout<<"\n Before swapping"<<"\n A = "<<a<<"\n B = "<<b<<endl;
        swap(a,b);
        cout<<"\n After swapping"<<"\n A = "<<a<<"\n B = "<<b<<endl;
        return 0;
}
