#include<iostream>
using namespace std;

    int fibonacci(int i){ 
	if(i==0) return 0; 
	else if(i==1) return 1; 
	else return (fibonacci(i-1)+fibonacci(i-2));
}

int main(){ 
	int n, i; 
	cout<< "Enter the number of element you want in series: "; 
	cin>>n;
	cout<<"fibonacci series is ";
	for(i=0;i<n;i++) { 
		cout<< fibonacci(i);
	}

}
 
