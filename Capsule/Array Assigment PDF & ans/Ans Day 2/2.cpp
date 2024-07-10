
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> res;
        // for(int i=0; i<nums.size(); i++)
        // {
        //     for(int j=i+1; j<nums.size(); j++)
        //     {
        //         if(nums[i]+nums[j]==target)
        //         {
        //             res.push_back(i);
        //             res.push_back(j);
        //         }
        //     }
        // }
        // return res;

        unordered_map<int, int> mapp;
        for (int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            if (mapp.find(diff) != mapp.end())
            {
                res.push_back(mapp[diff], I);
                res.push_back(i);
            }
            mapp[nums[i]] = i;
        }
        return res;

        // optimal
        //  sort(nums.begin(), nums.end());
        //  int left = 0;
        //  int right  = nums.size() - 1;
        //  while(left < right)
        //  {
        //      int sum = nums[left] + nums[right];
        //      if(sum == target)
        //      {
        //          res.push_back(left);
        //          res.push_back(right);
        //      }
        //      else if(sum > target)
        //      {
        //          right--;
        //      }
        //      else
        //      {
        //          left++;
        //      }
        //  }
        //  return res;
        //  vector<int>index;
        //  sort(nums.begin(),nums.end());
        //  int i=0;
        //  int j=nums.size()-1;
        //  while(i<j)
        //  {
        //      int sum=nums[i]+nums[j];
        //      if(sum==target)
        //      {
        //          index.push_back(i);
        //          index.push_back(j);
        //      }
        //      else if( sum<target)
        //      {
        //          i++;
        //      }
        //      else j--;
        //  }
        //  return index;

        //         vector<int> res;
        // long long n = nums.size();
        // sort(nums.begin(), nums.end());
        // long long left = 0, right = n - 1;
        // while (left < right) {
        //     long long sum = nums[left] + nums[right];
        //     if (sum == target) {
        //         res.push_back(left);
        //         res.push_back(right);
        //         break;
        //     }
        //     else if (sum < target) left++;
        //     else right--;
        // }
        // return res;
    }
};