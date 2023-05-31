class Solution {
public:
    int solve(string text1, string text2, int i, int j)
    {
        if(i <= 0 || j <= 0)
            return 0;
        
        int ans = 0;
        if(text1[i - 1] == text2[j - 1])
        {
            return ans =  1 + solve(text1, text2, i - 1, j - 1);
        }
        else
        {
            int op1 = solve(text1, text2, i - 1, j);
            int op2 = solve(text1, text2, i, j - 1);
            ans = max(op1, op2);
        }
        return ans;
    }
    
    int solvemem(string text1, string text2, int i, int j, vector<vector<int>>dp)
    {
        if(i <= 0 || j <= 0)
            return dp[i][j] = 0;
        
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        
        int ans = 0;
        if(text1[i - 1] == text2[j - 1])
        {
            return ans =  1 + solve(text1, text2, i - 1, j - 1);
        }
        else
        {
            int op1 = solve(text1, text2, i - 1, j);
            int op2 = solve(text1, text2, i, j - 1);
            ans = max(op1, op2);
        }
        return dp[i][j] = ans;        
    }
    
    int solvetab(string text1, string text2, int n, int m)
    {
        vector<vector<int>>dp(n + 1, vector<int>(m + 1, 0));
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                int ans = 0;
                if(text1[i - 1] == text2[j - 1])
                {
                    ans =  1 + dp[i - 1][j - 1];
                }
                else
                {
                    int op1 = dp[i - 1][j];
                    int op2 = dp[i][j - 1];
                    ans = max(op1, op2);
                }
                dp[i][j] = ans;                      
            }
        }
        return dp[n][m];
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>>dp(n + 1, vector<int>(m + 1, -1));
        return solvetab(text1, text2, n, m);
    }
};