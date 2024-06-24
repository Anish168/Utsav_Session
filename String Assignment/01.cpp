class Solution
{
public:
    int longestPalindrome(string s)
    {
        vector<int> lower(26, 0);
        vector<int> upper(26, 0);
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                lower[s[i] - 'a']++;
            }
            else
            {
                upper[s[i] - 'A']++;
            }
        }

        int count = 0;
        bool flag = 0;
        for (int i = 0; i < 26; i++)
        {
            if (lower[i] % 2 == 0)
                count += lower[i];
            else
            {
                count = count + lower[i] - 1;
                flag = 1;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (upper[i] % 2 == 0)
                count += upper[i];
            else
            {
                count = count + upper[i] - 1;
                flag = 1;
            }
        }

        return count + flag;
    }
};