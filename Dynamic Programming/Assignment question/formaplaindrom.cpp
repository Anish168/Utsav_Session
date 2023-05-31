class Solution{
  public:
  int solve(string a, string b)
    {
        vector<vector<int>>dp(a.length() + 1, vector<int>(b.length() + 1, 0));
        
        for(int i = a.length() - 1; i >= 0; i--)
        {
            for(int j = b.length() - 1; j >= 0; j--)
            {
                int ans = 0;
                if(a[i] == b[j])
                {
                    ans = 1 + dp[i+1][j+1];
                }
                else
                {
                    int op1 = dp[i][j + 1];
                    int op2 = dp[i + 1][j];
                    ans = max(op1, op2);
                }
                dp[i][j] = ans;
            }
        }
        return dp[0][0];
    }
    int countMin(string s){
    //complete the function here
        string s2 = string(s.rbegin(),s.rend());
        int ans = solve(s, s2);
        return s.size() - ans;
    }
};