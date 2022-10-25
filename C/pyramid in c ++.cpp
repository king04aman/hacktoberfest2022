#include<iostream>
using namespace std;
int main()
{
    int i, space, rowSize, k=0;
    cout<<"Enter the Number of Rows: ";
    cin>>rowSize;
    cout<<"\nPyramid of "<<rowSize<<" Rows or Lines:\n";
    for(i=1; i<=rowSize; i++)
    {
        for(space=1; space<=(rowSize-i); space++)
            cout<<"  ";
        while(k!=(2*i-1))
        {
            cout<<"* ";
            k++;
        }
        k=0;
        cout<<endl;
    }
    cout<<endl;
    return 0;
}