class Solution
{
public:
    // Function to check if a string can be obtained by rotating
    // another string by exactly 2 places.

    void rotateACW(string &s)
    {
        char ch = s[0];
        int index = 1;
        while (index < s.size())
        {
            s[index - 1] = s[index];
            index++;
        }
        s[s.size() - 1] = ch;
    }
    void rotateCW(string &s)
    {
        char ch = s[s.size() - 1];
        int index = s.size() - 1;
        while (index >= 0)
        {
            s[index + 1] = s[index];
            index--;
        }
        s[0] = ch;
    }

    bool isRotated(string str1, string str2)
    {
        // Your code here
        string cw = str1, acw = str1;
        if (str1.size() != str2.size())
            return 0;
        rotateCW(cw);
        rotateCW(cw);

        if (cw == str2)
            return 1;

        rotateACW(acw);
        rotateACW(acw);

        if (acw == str2)
            return 1;

        return 0;
    }
};