#include <bits/stdc++.h>

using namespace std;
int mcm(int* p, int i,int j , int n){

    int dp[n+1][n+1];
    for(int i = 0;i<n+1;i++){
        for(int j = 0; j<n+1; j++){
            dp[i][j]=-1;}}
        
    
    if(i==j){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
        
    }
    dp[i][j]= INT_MAX;
   for (int k = i; k < j; k++)
	{
		dp[i][j] = min(
			dp[i][j], mcm(p, i, k,n)
					+ mcm(p, k + 1, j,n)
					+ p[i - 1] * p[k] * p[j]);
	}
    return dp[i][j];
}
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    } cout<<mcm(arr,1,n-1,n);

    return 0;
}
