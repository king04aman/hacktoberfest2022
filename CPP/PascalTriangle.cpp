#include<iostream>
using namespace std;
//pascal triangle
// nck+1 = (nck . (n-k))/k+1
/*
n = 6
1 
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
*/
int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int icj=1;
        for(int j=0;j<=i;j++){
            cout<<icj<<" ";
            int icjp1 = icj * (i-j)/(j+1);
            icj = icjp1;
        }
        cout<<endl;
    }
    return 0;
}