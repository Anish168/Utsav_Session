class Solution
{
public:
    int lps(string s)
    {
        // Your code goes here
        vector<int> lps(s.size(), 0);
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
        return lps[s.size() - 1];
    }
};