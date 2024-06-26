class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        // int ans = -1;
        // for(int i = 0; i <= nums.size(); i++)
        // {
        //     int flag = 0;
        //     for(int j = 0; j < nums.size(); j++)
        //     {
        //         if(i == nums[j])
        //         {
        //             flag = 1;
        //             break;
        //         }
        //     }
        //     if(flag == 0)
        //     {
        //         ans = i;
        //     }
        // }
        //         // return ans;
        int n = nums.size();
        //         int hash[n + 1] = {0};
        //         for(int i = 0; i < n; i++)
        //         {
        //             hash[nums[i]] = 1;
        //         }

        //         for(int i = 0; i < n; i++)
        //         {
        //             if(hash[i] == 0)
        //             {
        //                 ans = i;
        //             }
        //         }
        //         return ans;

        int sum = 0;
        int ans = n * (n + 1) / 2;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        return ans - sum;
    }
};