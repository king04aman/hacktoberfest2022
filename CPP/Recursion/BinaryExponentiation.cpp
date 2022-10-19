#include <bits/stdc++.h>

typedef long long ll;

// Calculates (x ^ y) % p
long long power(long long x, ll y, ll p)
{
    long long res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int main()
{
    int x = 75, y = 34;
    cout << "x raised to the power y mod 10^9 + 7 is " << power(x, y, (ll)(1e9 + 7));
    return 0;
}

