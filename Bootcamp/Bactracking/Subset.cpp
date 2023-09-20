class Solution {
public:
    void solve(vector<int>&nums, vector<vector<int>>&result, vector<int>&temp, int i)
    {
        //base case
        if(i == nums.size())
        {
            result.push_back(temp);
            return;
        }
        
        //include
        temp.push_back(nums[i]);
        solve(nums,result, temp, i+1);
        
        //backtrack
        temp.pop_back();
        
        //exclude
        solve(nums, result, temp , i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int>temp;
        int indx = 0;
        
        solve(nums, result, temp, indx);
        return result;
    }
};