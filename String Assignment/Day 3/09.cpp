class Solution
{
public:
    int minChar(string str)
    {
        // Write your code here
        string rev = str;
        reverse(rev.begin(), rev.end());
        rev += '$';
        // str += rev;
        rev += str;
        int n = str.size();
        vector<int> lps(n, 0);
        int pre = 0, suff = 1;
        while (suff < n)
        {
            if (rev[pre] == rev[suff])
            {
                lps[suff] = pre + 1;
                pre++, suff++;
            }
            else
            {
                if (pre == 0)
                {
                    // lps[suff] = 0;
                    suff++;
                }
                else
                {
                    pre = lps[pre - 1];
                }
            }
        }
        return n - lps[n - 1];
    }
};