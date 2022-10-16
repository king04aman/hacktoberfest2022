//contributor: ChakitBhandari
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> fibonacci(int n) {
	vector<ll>fib;
	fib.push_back(0);
	fib.push_back(1);
	for (int i = 1; i < n; ++i)
		fib.push_back(fib.back() + fib[fib.size() - 2]);
	return fib;
}

int main() {
	int n;
	cin >> n; //Enter the no till where you want to print the fibonacci series.
	vector<ll>fib = fibonacci(n);
	for (auto i : fib)
		cout << i << " ";
	cout << "\n";
	return 0;
}