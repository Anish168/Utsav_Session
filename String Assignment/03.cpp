class Solution
{
public:
    string defangIPaddr(string address)
    {
        string ans;
        int indx = 0;
        while (indx < address.size())
        {
            if (address[indx] == '.')
            {
                ans += "[.]";
            }
            else
            {
                ans += address[indx];
            }
            indx++;
        }
        return ans;
    }
};
