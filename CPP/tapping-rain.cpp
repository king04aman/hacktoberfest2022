
//THIS IS O(N^2) SO IT GIVES TLE 
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
   int trappingWater(int arr[], int n) 
{
    
   int left[n]={0};
   int right[n]={0};
   int res=0;
   left[0]=arr[0];
     for (int j=1; j<n; j++)
           left[j] = max(left[j-1], arr[j]);
           right[n-1]=arr[n-1];
     for (int j=n-2; j>=0; j--)
           right[j] = max(right[j+1], arr[j]); 
  
      for(int i=0;i<n;i++)
       res +=(min(left[i], right[i]) - arr[i]);   
    

    return res; 
} 
};

int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        cout << obj.trappingWater(a, n) << endl; 
    }
    return 0;
} 

//BETTER APPROACH
 
/*  int trappingWater(int arr[], int n) 
{
    
   int left[n]={0};
   int right[n]={0};
   int res=0;
   left[0]=arr[0];
     for (int j=1; j<n; j++)
           left[j] = max(left[j-1], arr[j]);
           right[n-1]=arr[n-1];
     for (int j=n-2; j>=0; j--)
           right[j] = max(right[j+1], arr[j]); 
  
      for(int i=0;i<n;i++)
       res +=(min(left[i], right[i]) - arr[i]);   
    

    return res; 
} */