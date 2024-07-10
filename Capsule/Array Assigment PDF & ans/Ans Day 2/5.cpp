class Solution
{
public:
    int maxSubArray(vector<int> &arr)
    {
        int cs = 0;
        int os = arr[0];
        for (int i = 0; i < arr.size(); i++)
        {
            if (cs <= 0)
            {
                cs = arr[i];
            }
            else
            {
                cs = cs + arr[i];
            }

            if (cs > os)
            {
                os = cs;
            }
        }
        return os;
    }
};