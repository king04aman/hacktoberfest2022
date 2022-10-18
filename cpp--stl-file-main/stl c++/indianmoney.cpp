#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a ,int b){
    return a<=b;
    }

int main(){
    int coins[]={1,2,5,10,20,50,100,200};
    int n=sizeof(coins)/sizeof(int);
    int money=168;
    while (money>0)
    {
        /* code */
    
    
    int lb=lower_bound(coins,coins+n,money,compare)-coins-1;
    // cout<<"value"<<coins[lb];
    int m= coins[lb];
    cout<<m<<" ,";
    money=money-m;
    }
    return 0;
}