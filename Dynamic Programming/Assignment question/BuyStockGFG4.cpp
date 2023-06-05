// GFG:-https://practice.geeksforgeeks.org/problems/maximum-profit4657/1
class Solution {
  public:
      int solveSO(int *price, int indx, int buy, int cap, int k, int n)
    {
        // int n = price.size();
        vector<vector<int>>next(2, vector<int>(k + 1, 0));
        vector<vector<int>>curr(2, vector<int>(k + 1, 0));

        
        for(int indx = n - 1; indx >= 0; indx--)
        {
            for(int buy = 0; buy <= 1; buy++)
            {
                for(int cap = 1; cap <= k; cap++)
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
        return curr[1][k];
    }
    int maxProfit(int k, int N, int A[]) {
        // code here
                return solveSO(A, 0, 1, 2, k, N);

    }
};