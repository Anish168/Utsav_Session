class Solution
{
public:
    void solve(vector<int> &nums, int &xorAns, int &sum, int indx)
    {
        // base case
        if (indx == nums.size())
        {
            sum = sum + xorAns;
            return;
        }

        // include
        xorAns = xorAns ^ nums[indx];
        solve(nums, xorAns, sum, indx + 1);

        // backTrack
        xorAns = xorAns ^ nums[indx];

        // exclude
        solve(nums, xorAns, sum, indx + 1);
    }

    int subsetXORSum(vector<int> &nums)
    {
        int sum = 0;
        int xorAns = 0;
        int indx = 0;
        solve(nums, xorAns, sum, indx);
        return sum;
    }
};