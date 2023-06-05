class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        // vector<vector<int>>ans;
        // int buy = 0;
        // int sell = 0;
        // vector<int> data;
        // for(int i = 0; i < n - 1; i++)
        // {
        //     if(A[i+1] > A[i])
        //     {
        //         sell++;
        //     }
        //     else
        //     {
        //         if(sell > buy)
        //         {
        //             vector<int> data;
        //             data.push_back(buy);
        //             data.push_back(sell);
        //             ans.push_back(data);
        //         }
        //         buy = i + 1;
        //         sell = i + 1;
        //     }
        // }
        // if(sell > buy)
        // {
        //     data.push_back(buy);
        //     data.push_back(sell);
        //     ans.push_back(data);
        // }
        // return ans;
        
        vector<vector<int>>ans;
        int profit = 0;
        int minimum = A[0];
        vector<int>data;
        for(int i = 1; i < n; i++)
        {
            int cost= A[i]- minimum;
            
            profit = max(profit,cost);
            
            minimum = min(minimum,A[i]);
            if(cost > 0)
            {
                data.push_back(cost);
                ans.push_back(data);
            }
        }
        return ans;
    }
};