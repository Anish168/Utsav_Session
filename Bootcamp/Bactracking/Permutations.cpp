class Solution {
public:

    void solve(vector<int>& nums,int i,vector<vector<int>>& ans){
        if(i==nums.size()-1){
            ans.push_back(nums);
            return;
        }
        for(int k=i;k<nums.size();k++){
            swap(nums[i],nums[k]);
            solve(nums,i+1,ans);
            swap(nums[i],nums[k]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        int i = 0;
        vector<vector<int>> ans;
        solve(nums,i,ans);
        return ans;
    }
};