class Solution
{
public:
    int numberOfBeams(vector<string> &bank)
    {
        int n = bank.size();
        int prevDevice = 0;
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            int currDevice = 0;
            for (char &ch : bank[i])
            {
                if (ch == '1')
                {
                    currDevice++;
                }
            }
            result += (prevDevice * currDevice);
            prevDevice = currDevice == 0 ? prevDevice : currDevice;
        }
        return result;
    }
};