// GitHub Username : nitishdeshpande07
// Email : nitishdeshpande07@gmail.com

// This is a program to print a floyds triangle of any given required size 

#include<iostream>

using namespace std ;

int main()
{
    int n ;
    int m=1 ;
    cout<<"enter the number of rows upto which the floyds traingle is intended to be printed "<<endl;
    cin>>n;

for(int j=2;j<=n;j++)
{ 
    cout<<"\n";
    for(int i=1;i<j;i++)
    {
        cout<<m;
        m++;
        


    }
}

return 0 ;

}
