class Solution
{
public:
    bool buddyStrings(string s, string goal)
    {
        if (s.size() != goal.size())
        {
            return false;
        }
        if (s != goal)
        {
            vector<int> dispos;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] != goal[i])
                {
                    dispos.push_back(i);
                }
            }

            if (dispos.size() == 2)
            {
                if (s[dispos[0]] == goal[dispos[1]] && s[dispos[1]] == goal[dispos[0]])
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        else
        {
            vector<int> frqctr(26, 0);
            for (auto ch : s)
            {
                frqctr[ch - 'a']++;
                if (frqctr[ch - 'a'] >= 2)
                {
                    return true;
                }
            }
        }
        return false;
    }
};