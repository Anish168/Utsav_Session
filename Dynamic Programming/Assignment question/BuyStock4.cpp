// Leetcode:- https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/
class Solution {
public:
//     int solveSO(vector<int>price, int indx, int buy, int cap, int k)
//     {
//         int n = price.size();
//         vector<vector<int>>next(2, vector<int>(k + 1, 0));
//         vector<vector<int>>curr(2, vector<int>(k + 1, 0));

        
//         for(int indx = n - 1; indx >= 0; indx--)
//         {
//             for(int buy = 0; buy <= 1; buy++)
//             {
//                 for(int cap = 1; cap <= k; cap++)
//                 {
//                    int profit = 0;
//                     if(buy == 1)
//                     {
//                         profit = max(-price[indx] + next[0][cap], 0 + next[1][cap]);
//                     }
//                     else
//                     {
//                         profit = max(price[indx] + next[1][cap - 1], 0 + next[0][cap]);
//                     }
//                     curr[buy][cap] = profit; 
//                 }               
//             }
//             next = curr;
//         }
//         return curr[1][k];
//     }
    
    //another way
//     int solve(vector<int>prices, int indx, int transNo, int k, int n)
//     {
//         if(indx == n || transNo == 2 * k)
//         {
//             return 0;
//         }
        
//         if(transNo % 2 == 0) //buy
//         {
//             return max(-prices[indx] + solve(prices, indx + 1, transNo + 1, k, n),
//                       0 + solve(prices, indx + 1, transNo, k, n));
//         }
//         return max(prices[indx] + solve(prices, indx + 1, transNo + 1, k, n),
//                       0 + solve(prices, indx + 1, transNo, k, n));
//     }
    
    //top down
//     int solve(vector<int>&prices, int indx, int transNo, int k, int n, vector<vector<int>>&dp)
//     {
//         if(indx == n || transNo == 2 * k)
//         {
//             return 0;
//         }
        
//         if(dp[indx][transNo] != -1)
//         {
//             return dp[indx][transNo];
//         }
        
//         if(transNo % 2 == 0)
//         {
//             return dp[indx][transNo] = max(-prices[indx] + solve(prices, indx + 1, transNo + 1, k, n, dp),
//                       0 + solve(prices, indx + 1, transNo, k, n, dp));
//         }
//         return dp[indx][transNo] = max(prices[indx] + solve(prices, indx + 1, transNo + 1, k, n, dp),
//                       0 + solve(prices, indx + 1, transNo, k, n, dp));
//     }
    
    //bottom up
    int solveTab(vector<int>&prices, int indx, int transNo, int k, int n)
    {
        
        vector<vector<int>>dp(prices.size()  + 1, vector<int> (2*k + 1, 0));
        
        for(int indx = n - 1; indx >= 0; indx--)
        {
            for(int transNo = 2*k - 1; transNo >= 0; transNo--)
            {
        
                if(transNo % 2 == 0)
                {
                    dp[indx][transNo] = max(-prices[indx] + dp[indx + 1][transNo + 1],
                              0 + dp[indx + 1][transNo]);
                }
                dp[indx][transNo] =  max(prices[indx] + dp[indx + 1][transNo + 1],
                              0 + dp[indx + 1][transNo]);                
            }
        }
        return dp[0][0];
    }
    
    int maxProfit(int k, vector<int>& prices) {
        // return solveSO(prices, 0, 1, 2, k);
        
        // return solve(prices, 0, 0, k, prices.size());
        
        //top down
        // vector<vector<int>>dp(prices.size(), vector<int> (2*k, -1));
        // return solve(prices, 0, 0, k, prices.size(), dp);
        
        //bottom up
        return solveTab(prices, 0, 0, k, prices.size());

    }
};