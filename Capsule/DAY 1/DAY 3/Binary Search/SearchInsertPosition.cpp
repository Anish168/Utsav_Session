class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // int ans = -1;
        // for(int i = 0; i<nums.size(); i++)
        // {
        //     if(nums[i] == target)
        //     {
        //         ans = i;
        //         break;
        //     }
        //     else if(target<nums[i])
        //     {
        //         ans = i;
        //         break;
        //     }
        // }
        // if(ans == -1)
        // {
        //     ans = nums.size();
        // }
        // return ans;
        
        // Can use binary Search
        int start = 0;
        int end = nums.size()-1;
        while(start<=end)
        {
            int mid = start + (end - start)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(target > nums[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return start;
    }
};