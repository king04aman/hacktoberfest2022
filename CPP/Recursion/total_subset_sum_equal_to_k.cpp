#include <bits/stdc++.h>
using namespace std;
// print number of subsets whose sum equal to k in an array
void check(int arr[], int i, int n, int k, int &ans)
{
    if (i >= n && k == 0)
        ans++;

    if (i >= n)
        return;
    check(arr, i + 1, n, k - arr[i], ans);
    check(arr, i + 1, n, k, ans);
}
void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    check(arr, 0, n, k, ans);
    cout << ans << endl;
}
int main()
{
    solve();
    return 0;
}