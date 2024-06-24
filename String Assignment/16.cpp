class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int n = chars.size();
        int i = 0;
        int index = 0;
        while (i < n)
        {
            char ch = chars[i];
            int count = 0;
            while (i < n && chars[i] == ch)
            {
                i++;
                count++;
            }
            chars[index] = ch;
            index++;
            if (count > 1)
            {
                string count_str = to_string(count);
                for (char &c : count_str)
                {
                    chars[index] = c;
                    index++;
                }
            }
        }
        return index;
    }
};