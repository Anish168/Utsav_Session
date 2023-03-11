class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int minimum = arr[0];
        int profit = 0;
         
        for(int i=1; i<arr.size(); i++)
        {
            int cost= arr[i]- minimum;
            
            profit = max(profit,cost);
            
            minimum = min(minimum,arr[i]);
        }
        return profit;
    }
};