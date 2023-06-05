// Leetcode:- https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/
class Solution {
public:
    
//     int solve(vector<int>&price, int indx, int buy)
//     {
//         //base case
//         if(indx >= price.size()) return 0;

//         //recursive case
//         int profit = 0;
//         if(buy == 1)
//         {
//             profit = max(-price[indx] + solve(price, indx + 1, 0), 0 + solve(price, indx + 1, 1));
//         }
//         else
//         {
//             profit = max(price[indx] + solve(price, indx + 2, 1), 0 + solve(price, indx + 1, 0));
//         }
//         return profit;
//     }

    //top down
//     int solve(vector<int>&price, int indx, int buy, vector<vector<int>>&dp)
//     {
//         //base case
//         if(indx >= price.size()) return 0;

//         if(dp[indx][buy] != -1) return dp[indx][buy];
//         //recursive case
//         int profit = 0;
//         if(buy == 1)
//         {
//             profit = max(-price[indx] + solve(price, indx + 1, 0, dp), 0 + solve(price, indx + 1, 1, dp));
//         }
//         else
//         {
//             profit = max(price[indx] + solve(price, indx + 2, 1, dp), 0 + solve(price, indx + 1, 0, dp));
//         }
//         return dp[indx][buy] = profit;
//     }
    
    //bottom up
    int solveTab(vector<int>price, int indx, int buy)
    {
        int n = price.size();
        vector<vector<int>>dp(n + 2, vector<int>(2, 0));   
        
        // dp[n][0] = dp[n][1] = 0;
        for(int indx = n - 1; indx >= 0; indx--)
        {
            for(int buy = 0; buy <= 1; buy++)
            {
                int profit = 0;
                if(buy == 1)
                {
                    profit = max(-price[indx] + dp[indx + 1][0], 0 + dp[indx + 1][1]);
                }
                else
                {
                    profit = max(price[indx] + dp[indx + 2][1], 0 + dp[indx + 1][0]);
                }
                dp[indx][buy] = profit;                
            }
        }
        return dp[0][1];
    }
    int maxProfit(vector<int>& prices) {
        // return solve(prices, 0, 1);
        
        //top down
        // int n = prices.size();
        // vector<vector<int>>dp(n, vector<int>(2, -1));
        // return solve(prices, 0, 1, dp);
        
        //bottom up
        return solveTab(prices, 0, 1);
    }
};