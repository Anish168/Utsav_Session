class Solution
{
    public:
        int solve(string a, string b)
        {
            vector<int>curr(b.length() + 1, 0);
            vector<int>next(b.length() + 1, 0);

            for(int i = a.length() - 1; i >= 0; i--)
            {
                for(int j = b.length() - 1; j >= 0; j--)
                {
                    int ans = 0;
                    if(a[i] == b[j])
                    {
                        ans = 1 + next[j+1];
                    }
                    else
                    {
                        int op1 = next[j];
                        int op2 = curr[j + 1];
                        ans = max(op1, op2);
                    }
                    curr[j] = ans;
                }
                next = curr;
            }
            return curr[0];
        }
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        //code here
        int l1 = solve(X,Y);
        int diff = m-l1;
        int diff2 = n - l1;
        int sum = diff + diff2 + l1;
        return sum;
    }
};