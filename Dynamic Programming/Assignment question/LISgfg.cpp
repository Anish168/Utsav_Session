// GFG:- https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1
class Solution
{
public:
    // Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int arr[])
    {
        // your code here
        vector<int> temp;
        temp.push_back(arr[0]);
        //   int l = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > temp.back())
            {
                temp.push_back(arr[i]);
                //   len++;
            }
            else
            {
                int ind = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();
                //   int ind = lower_bound(temp.begin(),temp.end(),arr[i]);
                temp[ind] = arr[i]; // repalcement
            }
            //   return len;
        }
        return temp.size();
    }
};