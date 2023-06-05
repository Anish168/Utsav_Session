// Leetcode:- https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/description/
class Solution {
public:
//     int solve(vector<int>price, int indx, int buy, int cap)
//     {
//         //base case
        
//         if(cap == 0 || indx == price.size()) return 0;

//         //recursive case
//         int profit = 0;
//         if(buy == 1)
//         {
//             profit = max(-price[indx] + solve(price, indx + 1, 0, cap), 0 + solve(price, indx + 1, 1, cap));
//         }
//         else
//         {
//             profit = max(price[indx] + solve(price, indx + 1, 1, cap - 1), 0 + solve(price, indx + 1, 0, cap));
//         }
//         return profit;
//     }
    
//     int solve(vector<int>&price, int indx, int buy, int cap, vector<vector<vector<int>>>&dp)
//     {
//         //base case
//         if(cap == 0 || indx == price.size()) return 0;

//         if(dp[indx][buy][cap] != -1) return dp[indx][buy][cap];
//         //recursive case
//         int profit = 0;
//         if(buy == 1)
//         {
//             profit = max(-price[indx] + solve(price, indx + 1, 0, cap, dp), 0 + solve(price, indx + 1, 1, cap, dp));
//         }
//         else
//         {
//             profit = max(price[indx] + solve(price, indx + 1, 1, cap - 1, dp), 0 + solve(price, indx + 1, 0, cap, dp));
//         }
//         return dp[indx][buy][cap] = profit;
//     }
    
//     int solveTab(vector<int>price, int indx, int buy, int cap)
//     {
//         int n = price.size();
//         vector<vector<vector<int>>>dp(n + 1, vector<vector<int>>(2, vector<int>(3, 0)));
        
//         for(int indx = n - 1; indx >= 0; indx--)
//         {
//             for(int buy = 0; buy <= 1; buy++)
//             {
//                 for(int cap = 1; cap <= 2; cap++)
//                 {
//                    int profit = 0;
//                     if(buy == 1)
//                     {
//                         profit = max(-price[indx] + dp[indx + 1][0][cap], 0 + dp[indx + 1][1][cap]);
//                     }
//                     else
//                     {
//                         profit = max(price[indx] + dp[indx + 1][1][cap - 1], 0 + dp[indx + 1][0][cap]);
//                     }
//                     dp[indx][buy][cap] = profit; 
//                 }
                                
//             }
//         }
//         return dp[0][1][2];
//     }
    
    int solveSO(vector<int>price, int indx, int buy, int cap)
    {
        int n = price.size();
        vector<vector<int>>next(2, vector<int>(3, 0));
        vector<vector<int>>curr(2, vector<int>(3, 0));

        
        for(int indx = n - 1; indx >= 0; indx--)
        {
            for(int buy = 0; buy <= 1; buy++)
            {
                for(int cap = 1; cap <= 2; cap++)
                {
                   int profit = 0;
                    if(buy == 1)
                    {
                        profit = max(-price[indx] + next[0][cap], 0 + next[1][cap]);
                    }
                    else
                    {
                        profit = max(price[indx] + next[1][cap - 1], 0 + next[0][cap]);
                    }
                    curr[buy][cap] = profit; 
                }               
            }
            next = curr;
        }
        return curr[1][2];
    }
    int maxProfit(vector<int>& prices) {
        // return solve(prices, 0, 1, 2);
        
        //top down
//         int n = prices.size();
//         vector<vector<vector<int>>>dp(n + 1, vector<vector<int>>(2, vector<int>(3, -1)));
        
//         return solve(prices, 0, 1, 2, dp);
        
        //bottom up
        // return solveTab(prices, 0, 1, 2);
        
        //Space optimization
        return solveSO(prices, 0, 1, 2);
        
    }
};