#include <iostream>
using namespace std;


void decToBin(int n)
{
	
	int binNum[32];


	int i = 0;
	while (n > 0) {

	
		binNum[i] = n % 2;
		n = n / 2;
		i++;
	}

	
	for (int j = i - 1; j >= 0; j--)
		cout << binNum[j];
}

int main()
{
	int n;
    cin>>n;
	decToBin(n);
	return 0;
}
