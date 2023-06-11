// GFG:- https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int solve(int w, int *wt, int *val, int indx)
    {
        //base case
        if(indx == 0)
        {
            if(wt[0] <= w) return val[0];
            else return 0;
        }
        
        //recurisve case
        int notPick = 0 + solve(w, wt, val, indx - 1);
        int pick = -1e9;
        if(wt[indx] <= w)
        {
            pick = val[indx] + solve(w - wt[indx], wt, val, indx - 1);
        }
        return max(notPick, pick);
    }
    
    int solveMem(int w, int *wt, int *val, int indx, vector<vector<int>>&dp)
    {
        //base case
        if(indx == 0)
        {
            if(wt[0] <= w) return val[0];
            else return 0;
        }
        
        if(dp[indx][w] != -1) return dp[indx][w];
        //recurisve case
        int notPick = 0 + solveMem(w, wt, val, indx - 1, dp);
        int pick = -1e9;
        if(wt[indx] <= w)
        {
            pick = val[indx] + solveMem(w - wt[indx], wt, val, indx - 1, dp);
        }
        return dp[indx][w] = max(notPick, pick);
    }
    
    int solveTab(int w, int *wt, int *val, int n)
    {
        vector<vector<int>> dp(n,vector<int>(w+1,0));
        for(int i=wt[0]; i<=w; i++){
            dp[0][i] = val[0];
        }
        
        for(int ind =1; ind<n; ind++){
            for(int cap=0; cap<=w; cap++){
                
                int notTaken = 0 + dp[ind-1][cap];
                
                int taken = INT_MIN;
                if(wt[ind] <= cap)
                    taken = val[ind] + dp[ind-1][cap - wt[ind]];
                    
                dp[ind][cap] = max(notTaken, taken);
            }
        }
        
        return dp[n-1][w];
    }
    
    int knapsack(vector<int>& wt, vector<int>& val, int n, int W){
    
        vector<int> prev(W+1,0);
        
        //Base Condition
        
        for(int i=wt[0]; i<=W; i++){
            prev[i] = val[0];
        }
        
        for(int ind =1; ind<n; ind++){
            for(int cap=W; cap>=0; cap--){
                
                int notTaken = 0 + prev[cap];
                
                int taken = INT_MIN;
                if(wt[ind] <= cap)
                    taken = val[ind] + prev[cap - wt[ind]];
                    
                prev[cap] = max(notTaken, taken);
            }
        }
        
        return prev[W];
    }

    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
    //   return solve(W, wt, val, n - 1);
    
    // vector<vector<int>>dp(n, vector<int>(W + 1, -1));
    // return solveMem(W, wt, val, n - 1, dp);
    
        return solveTab(W, wt, val, n);
    }
};