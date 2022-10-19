
#include<iostream>
using namespace std;

int main(){
    int num,m,r=0,num1;
    cout<<"Enter the number to be checked: "<<endl;
    cin>>num;
    num1=num;
    while(num>0){
        m=num%10;
        r=(m*m*m)+r;
        num=num/10;
    }
    if(num1==r){
        cout<<"The entered number is armstrong number"<<endl;
    }
    else{
        cout<<"The entered number is not armstrong number"<<endl;
    }
    return 0;
}