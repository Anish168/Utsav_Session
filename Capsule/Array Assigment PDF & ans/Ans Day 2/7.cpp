class Solution
{
public:
    //     void nextPermutation(vector<int>& nums) {
    //         int n = nums.size();
    //         //step 1:- find break point
    //         int indx = -1;
    //         for(int i = n - 2; i >= 0; i--)
    //         {
    //             if(nums[i] < nums[i+1])
    //             {
    //                 indx = i;
    //                 break;
    //             }
    //         }
    //         if(indx == -1)
    //         {
    //             reverse(nums.begin(), nums.end());
    //             return;
    //         }

    //         //step 2:- swap
    //         for(int i = n - 1; i >= 0; i--)
    //         {
    //             if(nums[i] > nums[indx])
    //             {
    //                 swap(nums[i], nums[indx]);
    //                 break;
    //             }
    //         }

    //         //step 3:-
    //         reverse(nums.begin() + indx + 1, nums.end());
    //     }

    void nextPermutation(vector<int> &nums)
    {
        int index = -1;
        int n = nums.size();
        // for(int i=n-2;i>0;i--)
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                index = i;
                break;
            }
        }
        if (index == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        // for(int i=n-1;i>index;i--)
        for (int i = n - 1; i >= 0; i--)
        {
            if (nums[i] > nums[index])
            {
                swap(nums[i], nums[index]);
                break;
            }
        }
        reverse(nums.begin() + index + 1, nums.end());
    }
};