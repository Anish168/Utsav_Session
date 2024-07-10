class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        // vector<int>ans(101);
        // int res = 0;
        // for(int i = 0; i < nums.size(); i++)
        // {
        //     ans[nums[i]]=1;
        // }
        // for(int i = 1; i < 101; i++)
        // {
        //     res = res + ans[i];
        // }
        // return res;
        set<int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
            }
            else
            {
                s.insert(nums[i]);
            }
        }
        return s.size();
    }
};