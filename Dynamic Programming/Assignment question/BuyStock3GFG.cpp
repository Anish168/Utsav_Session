// GFG:- https://practice.geeksforgeeks.org/problems/buy-and-sell-a-share-at-most-twice/1
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
int maxProfit(vector<int>&prices){
    //Write your code here..
            //top down
        return solveSO(prices, 0, 1, 2);
}