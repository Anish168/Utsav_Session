class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int largest = -1;
        for(int i = 0; i < candies.size(); i++)
        {
            if(candies[i] > largest)
            {
                largest = candies[i];
            }
        }
        
        vector<bool>ans;
        for(int i = 0; i < candies.size(); i++)
        {
            int res = candies[i] + extraCandies;
            if(res >= largest)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};