class Solution
{
public:
    void LPS(vector<int> &lps, string s)
    {
        // Your code goes here
        // vector<int>lps(s.size(), 0);
        int pre = 0, suff = 1;
        while (suff < s.size())
        {
            // Match
            if (s[pre] == s[suff])
            {
                lps[suff] = pre + 1;
                suff++, pre++;
            }
            // Not matched
            else
            {
                if (pre == 0)
                {
                    lps[suff] = 0;
                    suff++;
                }
                else
                {
                    pre = lps[pre - 1];
                }
            }
        }
        // return lps[s.size() -1];
    }
    int strStr(string haystack, string needle)
    {
        vector<int> lps(needle.size(), 0);
        LPS(lps, needle);
        int first = 0, second = 0;
        while (first < haystack.size() && second < needle.size())
        {
            //             match
            if (haystack[first] == needle[second])
            {
                first++, second++;
            }
            else
            {
                if (second == 0)
                {
                    first++;
                }
                else
                {
                    second = lps[second - 1];
                }
            }
        }
        if (second == needle.size())
        {
            return first - second;
        }
        return -1;
    }
};