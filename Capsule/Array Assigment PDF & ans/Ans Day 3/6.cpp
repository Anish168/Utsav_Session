// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
// int cnt1 = 0 , cnt2 = 0;
//         int element1 = 0, element2 = 0;
//         vector<int> ans;

//         for (int num : nums) {
//             if (element1 == num) {
//                 cnt1++;
//             } else if (element2 == num) {
//                 cnt2++;
//             } else if (cnt1 == 0) {
//                 cnt1 = 1;
//                 element1 = num;
//             } else if (cnt2 == 0) {
//                 cnt2 = 1;
//                 element2 = num;
//             } else {
//                 cnt1--;
//                 cnt2--;
//             }
//         }

//             cnt1 = 0;
//             cnt2 = 0;
//             for (int num : nums) {
//                 if (num == element1) {
//                     cnt1++;
//                 } else if (num == element2) {
//                     cnt2++;
//                 }
//             }

//         if (cnt1 > nums.size() / 3) {
//             ans.push_back(element1);
//         }
//         if (cnt2 > nums.size() / 3) {
//             ans.push_back(element2);
//         }

//         return ans;
//     }
// };

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        // int element1,element2,count1,count2=0;  // count1 and count 2 ko dono ko 0 se intilize kro
        int element1, element2;
        int count1 = 0, count2 = 0;
        int n = nums.size();
        vector<int> major;
        for (int i = 0; i < nums.size(); i++)
        {
            if (count1 == 0 && nums[i] != element2)
            {
                count1++;
                element1 = nums[i];
            }
            else if (count2 == 0 && nums[i] != element1)
            {
                count2++;
                element2 = nums[i];
            }
            else if (nums[i] == element1)
            {
                count1++;
            }
            else if (nums[i] == element2)
            {
                count2++;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        count1 = 0;
        count2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == element1)
            {
                count1++;
            }
            if (nums[i] == element2)
            {
                count2++;
            }
        }
        if (count1 > n / 3)
        {
            major.push_back(element1);
        }
        if (count2 > n / 3)
        {
            major.push_back(element2);
        }
        return major;
    }
};