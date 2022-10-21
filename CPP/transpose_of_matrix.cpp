#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter the number of rows of your 2D array: ";
    cin>>a;
    cout<<"enter the number of columns of your 2D array: ";
    cin>>b;
    int x[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<"enter the "<<i<<","<<j<<" position value: ";
            cin>>x[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
    // transpose of matrix
    cout<<"the transpose of the matrix is: "<<endl;
    for(int j=0;j<b;j++){
        for(int i=0;i<a;i++){
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}