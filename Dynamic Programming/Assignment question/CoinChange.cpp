// leetcode:- https://leetcode.com/problems/coin-change/
class Solution {
public:
    int solve(vector<int>&coins, int indx, int amount)
    {
        //base case
        if(indx == 0)
        {
            if(amount % coins[0] == 0)
            {
                return amount/coins[0];
            }
            return 1e9;
        }
        //recursive case
        int notTake = 0 + solve(coins, indx - 1, amount);
        int take = 1e9;
        if(coins[indx] <= amount)
            take = 1 + solve(coins, indx, amount - coins[indx]);
        
        return min(notTake, take);
    }
    
    int solveMem(vector<int>&coins, int indx, int amount, vector<vector<int>>&dp)
    {
        //base case
        if(indx == 0)
        {
            if(amount % coins[0] == 0)
            {
                return amount/coins[0];
            }
            return 1e9;
        }
        if(dp[indx][amount] != -1) return dp[indx][amount];
        //recursive case
        int notTake = 0 + solveMem(coins, indx - 1, amount, dp);
        int take = 1e9;
        if(coins[indx] <= amount)
            take = 1 + solveMem(coins, indx, amount - coins[indx], dp);
        
        return dp[indx][amount] = min(notTake, take);

    }
    
    int solveTab(vector<int>& arr, int T){

        int n= arr.size();

        vector<vector<int>> dp(n,vector<int>(T+1,0));

        for(int i=0; i<=T; i++){
            if(i%arr[0] == 0)  
                dp[0][i] = i/arr[0];
            else dp[0][i] = 1e9;
        }

        for(int ind = 1; ind<n; ind++){
            for(int target = 0; target<=T; target++){

                int notTake = 0 + dp[ind-1][target];
                int take = 1e9;
                if(arr[ind]<=target)
                    take = 1 + dp[ind][target - arr[ind]];

                 dp[ind][target] = min(notTake, take);
            }
        }
        return dp[n-1][T];
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        // return solve(coins, n - 1, amount);
        
        // vector<vector<int>>dp(n, vector<int>(amount + 1, -1));
        // int ans = solveMem(coins, n - 1, amount, dp);
        // if(ans >= 1e9)
        // {
        //     return -1;
        // }
        // return ans;
        
        int ans = solveTab(coins, amount);
        if(ans >= 1e9)
        {
            return -1;
        }
        return ans;
    }
};