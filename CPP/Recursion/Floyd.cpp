#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// my github id : https://github.com/KadhamVj23
int main(){
    int num, i , c, cnt = 1;
    cout<<"Enter number of rows of Floyd'triangle: ";
    cin>>num;
    for(i = 1; i<=num; i++){
        for(c = 1; c<=i; c++){
            cout<<cnt;
            cnt++;
        }
        cout<<endl;
    }
    return 0;
}