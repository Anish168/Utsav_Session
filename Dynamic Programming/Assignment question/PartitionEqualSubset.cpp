// GFG:- https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1
class Solution{
public:
    bool subsetSumToK(int n, int k, int *arr){
            vector<bool> prev(k+1,false);
    
            prev[0] = true;
    
            if(arr[0]<=k)
                prev[arr[0]] = true;
    
            for(int ind = 1; ind<n; ind++){
                vector<bool> cur(k+1,false);
                cur[0] = true;
                for(int target= 1; target<=k; target++){
                    bool notTaken = prev[target];
    
                    bool taken = false;
                        if(arr[ind]<=target)
                            taken = prev[target-arr[ind]];
    
                    cur[target]= notTaken||taken;
                }
                prev = cur;
            }
    
            return prev[k];
        }
    int equalPartition(int N, int nums[])
    {
        // code here
        int sum = 0;
        for(int i = 0; i < N; i++)
        {
            sum += nums[i];
        }
        
        if(sum%2 != 0) return 0;

        return subsetSumToK(N, sum / 2, nums);
    }
};

//Leetcode:- https://leetcode.com/problems/partition-equal-subset-sum/
class Solution {
public:
    bool solveTab(vector<int>arr, int indx, int k)
    {
        int n = arr.size();
        vector<vector<bool>> dp(n,vector<bool>(k+1,false));
        
        for(int i=0; i<n; i++){
            dp[i][0] = true;
        }
        if(arr[0]<=k) dp[0][arr[0]] = true;
        
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
//     bool subsetSumToK(int n, int k, vector<int> &arr){
//         vector<bool> prev(k+1,false);

//         prev[0] = true;

//         if(arr[0]<=k)
//             prev[arr[0]] = true;

//         for(int ind = 1; ind<n; ind++){
//             vector<bool> cur(k+1,false);
//             cur[0] = true;
//             for(int target= 1; target<=k; target++){
//                 bool notTaken = prev[target];

//                 bool taken = false;
//                     if(arr[ind]<=target)
//                         taken = prev[target-arr[ind]];

//                 cur[target]= notTaken||taken;
//             }
//             prev = cur;
//         }

//         return prev[k];
//     }
    
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }
        
        if(sum%2 != 0) return 0;

        // return subsetSumToK(nums.size(), sum / 2, nums);
        return solveTab(nums, 0, sum /2);
    }
};