#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	stack<int>st;
	cout<<"enter the decimal number";
	cin>>n;
	while(n>0){
		int rem=n%2;
		st.push(rem);
		n=n/2;
	}
	while(!st.empty()){
		x=st.top();
		st.pop();
		cout<<x<<" ";
	}
	return 0;
}