//Github Username:- JanumalaAkhilendra


#include <bits/stdc++.h>
using namespace std;

void print_patt(int row){	
    int count = 1;
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << count << " ";
			count += 1;
		}
		cout << "\n";
	}
}


int main()
{
	int row = 5;
	print_patt(row);
	return 0;
}
