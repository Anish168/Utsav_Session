// GFG:- https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    
	    int Totalsum = 0;
        for(int i = 0; i < n; i++)
        {
            Totalsum += arr[i];
        }
        int k = Totalsum;
	    vector<vector<bool>> dp(n,vector<bool>(k+1,0));
        
        for(int i=0; i<n; i++)
        {
            dp[i][0] = true;
        }
        if(arr[0] <= k) dp[0][arr[0]] = 1;
        
        for(int ind = 1; ind<n; ind++){
            for(int target= 1; target<=k; target++){
                
                bool notTaken = dp[ind-1][target];
        
                bool taken = 0;
                    if(arr[ind]<=target)
                        taken = dp[ind-1][target-arr[ind]];
            
                dp[ind][target]= notTaken||taken;
            }
        }
        
        int mini = 1e9;
        for(int s1 = 0; s1 <= Totalsum / 2; s1++)
        {
            if(dp[n - 1][s1] == true) mini = min(mini, (Totalsum - s1) - s1);
        }
        return mini;
	} 
};

//Leetcode:- https://leetcode.com/problems/partition-array-into-two-arrays-to-minimize-sum-difference/
