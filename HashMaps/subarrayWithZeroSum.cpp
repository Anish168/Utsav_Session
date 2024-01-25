class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        //brute force
        
        // for(int i = 0; i < n; i++)
        // {
        //     int sum = 0;
        //     for(int j = i; j < n;j++)
        //     {
        //          sum+=arr[j];
        //          if(sum == 0)
        //          {
        //              return true;
        //          }
        //     }
        // }
        // return false;
        
        //hashMap O(n) + prefixSum
        unordered_set<int>s;
        int prefixSum =0;
        for(int i = 0; i<n; i++)
        {
            prefixSum += arr[i];
            if(prefixSum == 0)
            {
                return true;
            }
            else if(s.find(prefixSum) != s.end())
            {
                return true;
            }
            s.insert(prefixSum);
        }
        return false;
    }
};