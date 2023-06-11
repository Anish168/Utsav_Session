// GFG:- https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1
class Solution{   
public:
    // bool solve(int indx, vector<int>arr, int target)
    // {
    //     //base case
    //     if(target == 0) return true;
    //     if(indx == 0) return arr[0] == target;
        
    //     //recursive case
    //     bool notTake = solve(indx - 1, arr, target);
    //     bool take = false;
    //     if(arr[indx] <= target) 
    //     {
    //         take = solve(indx - 1, arr, target - arr[indx]);
    //     }
    //     return notTake || take;
    // }
    
    bool solveMem(vector<int>arr, int indx, int target, vector<vector<int>>&dp)
    {
        //base case
        if(target == 0) return true;
        if(indx == 0) return arr[0] == target;
        
        //recursive case
        if(dp[indx][target] != -1) return dp[indx][target];
        bool notTake = solveMem(arr, indx - 1, target, dp);
        bool take = false;
        if(arr[indx] <= target) 
        {
            take = solveMem(arr, indx - 1, target - arr[indx], dp);
        }
        return dp[indx][target] = notTake || take;
    }
    
    bool solveTab(vector<int>arr, int indx, int k)
    {
        int n = arr.size();
        vector<vector<bool>> dp(n,vector<bool>(k+1,false));
        
        for(int i=0; i<n; i++){
            dp[i][0] = true;
        }
        if(arr[0] <= k) dp[0][arr[0]] = true;
        
        for(int ind = 1; ind<n; ind++){
            for(int target= 1; target<=k; target++){
                
                bool notTaken = dp[ind-1][target];
        
                bool taken = false;
                    if(arr[ind]<=target)
                        taken = dp[ind-1][target-arr[ind]];
            
                dp[ind][target]= notTaken||taken;
            }
        }
        
        return dp[n-1][k];
    }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n = arr.size();
        // return solve(n - 1, arr, sum);
        
        // vector<vector<int>> dp(n,vector<int>(sum+1,-1));
        // return solveMem(arr, n - 1, sum, dp);
        
        return solveTab(arr, n - 1, sum);
    }
};