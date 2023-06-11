// Leetcode:- https://leetcode.com/problems/longest-increasing-subsequence/
class Solution {
public:
//     int solve(vector<int>&arr, int curr, int prev)
//     {
//         // base case
//         if (curr == arr.size())
//         {
//             return 0;
//         }

//         // recursive case
//         // include
//         int pick = 0;
//         if (prev == -1 || arr[prev] < arr[curr])
//         {
//             pick = 1 + solve(arr, curr + 1, curr);
//         }

//         // exclude
//         int notPick = 0 + solve(arr, curr + 1, prev);
//         return max(pick, notPick);
//     }
    
    //top down
//     int solveMem(vector<int>&arr, int curr, int prev, vector<vector<int>>&dp)
//     {
//         // base case
//         if (curr == arr.size())
//         {
//             return 0;
//         }
        
//         if(dp[curr][prev + 1] != -1) return dp[curr][prev + 1];

//         // recursive case
//         // include
//         int pick = 0;
//         if (prev == -1 || arr[prev] < arr[curr])
//         {
//             pick = 1 + solveMem(arr, curr + 1, curr, dp);
//         }

//         // exclude
//         int notPick = 0 + solveMem(arr, curr + 1, prev, dp);
//         return dp[curr][prev + 1] = max(pick, notPick);
//     }
    
        //bottom up
//     int solveTab(vector<int>&arr, int n)
//     {
//         vector<vector<int>>dp(n + 1, vector<int>(n + 1, 0));
//         for(int curr = n - 1; curr >= 0; curr--)
//         {
//             for(int prev = curr - 1; prev >= -1; prev--)
//             {
//                 int pick = 0;
//                 if (prev == -1 || arr[prev] < arr[curr])
//                 {
//                     pick = 1 + dp[curr + 1][curr + 1];
//                 }

//                 // exclude
//                 int notPick = 0 + dp[curr + 1][prev + 1];
//                 dp[curr][prev + 1] = max(pick, notPick);
//             }
//         }
//         return dp[0][-1 + 1];
//     }
    
        //SO 
//     int solveSO(vector<int>&arr, int n)
//     {
//         vector<int>next(n + 1, 0);
//         vector<int>curr(n + 1, 0);

//         for(int indx = n - 1; indx >= 0; indx--)
//         {
//             for(int prev = indx - 1; prev >= -1; prev--)
//             {
//                 int pick = 0;
//                 if (prev == -1 || arr[prev] < arr[indx])
//                 {
//                     pick = 1 + next[indx + 1];
//                 }

//                 // exclude
//                 int notPick = 0 + next[prev + 1];
//                 curr[prev + 1] = max(pick, notPick);
//             }
//             next = curr;
//         }
//         return next[-1 + 1];
//     }
     
    //More optimized in terms of space TC 0(N2) But SC O(N)
    int solve(vector<int>&arr, int n)
    {
        vector<int>dp(n , 1);
        int maxi = 1;
        for(int i = 0; i < n; i++)
        {
            for(int prev = 0; prev < i; prev++)
            {
                if(arr[prev] < arr[i]) 
                {
                    dp[i] = max(dp[i], 1 + dp[prev]);
                }
            }
            maxi = max(maxi, dp[i]);
        }
        return maxi;
    }
    int lengthOfLIS(vector<int>& nums) {
        int curr = 0;
        int prev = -1;
        // int ans = solve(nums, curr, prev);
        // return ans;
        
        int n = nums.size();
        // vector<vector<int>> dp(n, vector<int>(n + 1, -1));
        // return solveMem(nums, curr, prev, dp);
        
        // return solveTab(nums, n);
        // return solveSO(nums, n);
        
        return solve(nums, n);

    }
};
