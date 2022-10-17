#include <bits/stdc++.h>
using namespace std;

	//using DP
	int minCoins(int n, int a[], int dp[]) {
		
		if(n == 0) return 0;
		
		int ans = INT_MAX;
	
		for(int i = 0; i<3; i++) {
			if(n-a[i] >= 0) {   // diff. of amt.(or current amt.) and coin chosen shud be >0 then only we can proceed
				int subAns = 0;
				if(dp[n-a[i]] != -1) {  //if solution for that current amt. present then no need to calculate just retrieve
					subAns = dp[n-a[i]];  
				} else {                     
					subAns = minCoins(n-a[i], a, dp); //else calculate using recursion
				}
				if(subAns != INT_MAX && subAns + 1 < ans) {   //+1 because we need to add initial break of amts.
					ans = subAns + 1;    //our subans sol.(+1) shud be in less than any other solution(ans) derived then only efficient sol.
				}
			}
		}
		return dp[n] = ans; //every step of sol. is calculated nd stored for further use if needed, this way highly optimized->DP
	
}
int main() {
    int n = 18;
		int a[] = {7,5,1};  //denomination available
		
		int dp[n+1]; //extra space n+1
		fill(dp,dp+n+1,-1); //initialize all val. of dp array to -1
		dp[0] = 0; //important in dp~
		
		int ans = minCoins(n, a, dp);
		cout<<ans;
		
		//for(int x: dp) {  --> prints coins required for amount rs.0 to 18
		//	cout<<x<<" ";
		//}
    return 0;
}