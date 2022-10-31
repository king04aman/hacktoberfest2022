#include <iostream>
using namespace std;


int fact(int n){
    if(n == 0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}

int nCr(int n, int r){
    
    int num,den;
    num = fact(n);
    
    den = fact(r)*fact(n-r);
    
    return num/den;              
}

int NCR(int n, int r){  // RECURSIVE
    if(r == 0 || n == r){
        return 1;
    }
    else{
        return NCR(n-1,r-1)+NCR(n-1,r);
    }
}
int main(){
    cout<<nCr(4,2)<<endl;
    cout<<NCR(4,2)<<endl;
    return 0;
}