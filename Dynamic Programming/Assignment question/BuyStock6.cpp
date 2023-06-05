// Leetcode:- https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/
class Solution {
public:
//     int solve(vector<int>price, int indx, int buy, int fee)
//     {
//         //base case
//         if(indx == price.size()) return 0;

//         //recursive case
//         int profit = 0;
//         if(buy == 1)
//         {
//             profit = max(-price[indx] + solve(price, indx + 1, 0, fee), 0 + solve(price, indx + 1, 1, fee));
//         }
//         else
//         {
//             profit = max(price[indx] - fee + solve(price, indx + 1, 1, fee), 0 + solve(price, indx + 1, 0, fee));
//         }
//         return profit;
//     }
    
    int solve(vector<int>&price, int indx, int buy, vector<vector<int>>&dp, int fee)
    {
        //base case
        if(indx == price.size()) return 0;

        if(dp[indx][buy] != -1) return dp[indx][buy];
        //recursive case
        int profit = 0;
        if(buy == 1)
        {
            profit = max(-price[indx] + solve(price, indx + 1, 0, dp, fee), 0 + solve(price, indx + 1, 1, dp, fee));
        }
        else
        {
            profit = max(price[indx] - fee + solve(price, indx + 1, 1, dp, fee), 0 + solve(price, indx + 1, 0, dp, fee));
        }
        return dp[indx][buy] = profit;
    }
    int maxProfit(vector<int>& prices, int fee) {
        // return solve(prices, 0, 1, fee);
        
        //top down
        int n = prices.size();
        vector<vector<int>>dp(n, vector<int>(2, -1));
        return solve(prices, 0, 1, dp, fee);
    }
};