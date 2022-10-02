//KADANE,S ALGORITHM
#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;

 int maxSubarraySum(int arr[], int n){
        
        int local_max=0;
        int global_max=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            local_max=max(arr[i],arr[i]+local_max);
            if(local_max>global_max)
            global_max=local_max;
        }
        return global_max;
        
    }
int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int t=1;
  cin >> t;
  while (t--)
  {
      int n;
      cin>>n;
    int arr[n];
    for(auto i:arr)
    cin>>arr[i];

    cout<< maxSubarraySum(arr,n);

  }
}