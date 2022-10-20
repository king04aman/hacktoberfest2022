/* C++ code for Sum of natural number 
   using recursion */

#include<iostream>
using namespace std;


int add(int n) {
    if(n != 0){
        return n + add(n - 1);
    }
    return 0;
}


int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Sum of <<n<< natural number is   =  " << add(n);

    return 0;
}
