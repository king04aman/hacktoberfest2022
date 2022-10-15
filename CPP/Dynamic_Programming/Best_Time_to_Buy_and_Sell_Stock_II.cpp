// Approach 1

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int i=0;
//         int j=1;
//        int profit=0;
//         if(prices.size()==2){
//             if(prices[j]>prices[i]){
//                 profit+=prices[j]-prices[i];
               
//             }
//             return profit;
//         }
        
//         while(i<prices.size() && j<prices.size()){
//             if(prices[j]>prices[i]){
//                // j++;
//                 while((prices[j]>prices[j-1]) && (j-1)!=i ){
//                     j++;
//                 }
//                 profit+=prices[j]-prices[i];
//                i=j;
               
//             }
//             if((prices[j]<prices[i]) ){
//                 i++;
//             }
//             if((prices[i]==prices[j]) ){
//                 i=j;
//                // j++;
//             }
         
//                 j++;
//         }
//         return profit;
//     }
// };


// Approach 2

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//        int n=prices.size();
//         int ans = 0;
//         for (int i = 1; i < n; i++) {
//             if (prices[i] > prices[i - 1])
//                 {ans += prices[i] - prices[i - 1];}
//         }
//         return ans;
//     }
// };


// Approach 3

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Maxprofit = 0;
        int min = prices[0];
        
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<prices[i-1])
            {
                min = prices[i];
                continue;
            }
            Maxprofit += prices[i] - min;
            min = prices[i];
        }
        
        return Maxprofit;
    }
};
