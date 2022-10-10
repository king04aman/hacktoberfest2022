clude <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
	if (n == 0)
		return 0;
	while (n != 1) {
		if (n % 2 != 0)
			return 0;
		n = n / 2;
	}
	return 1;
}

int main()
{
    int n;
    cin>>n;
    int ans = isPowerOfTwo(n);
    if(ans == 1)
    {
        cout<<"Power of 2";
    }
    else{
        cout<<"Not a power of 2";
    }
	return 0;
}
