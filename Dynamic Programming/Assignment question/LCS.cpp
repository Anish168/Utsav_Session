// 1st code
// range alag h gfg or leetcode ka
class Solution
{
public:
    // Function to find the length of longest common subsequence in two strings.
    //      int solve(string &a, string &b, int i, int j, vector<vector<int>>&dp)
    //     {
    //         //base case
    //         if(i == a.length())
    //         {
    //             return 0;
    //         }

    //         if(j == b.length())
    //         {
    //             return 0;
    //         }

    //         if(dp[i][j] !=-1)
    //         {
    //             return dp[i][j];
    //         }
    //         //recurive case
    //         int ans = 0;
    //         if(a[i] == b[j])
    //         {
    //             ans = 1 + solve(a, b, i+1, j+1, dp);
    //         }
    //         else
    //         {
    //             int op1 = solve(a, b, i, j + 1, dp);
    //             int op2 = solve(a, b, i + 1, j, dp);
    //             ans = max(op1, op2);
    //         }
    //         return dp[i][j] = ans;
    //     }

    //     int solve(string a, string b)
    //     {
    //         vector<vector<int>>dp(a.length() + 1, vector<int>(b.length() + 1, 0));

    //         for(int i = a.length() - 1; i >= 0; i--)
    //         {
    //             for(int j = b.length() - 1; j >= 0; j--)
    //             {
    //                 int ans = 0;
    //                 if(a[i] == b[j])
    //                 {
    //                     ans = 1 + dp[i+1][j+1];
    //                 }
    //                 else
    //                 {
    //                     int op1 = dp[i][j + 1];
    //                     int op2 = dp[i + 1][j];
    //                     ans = max(op1, op2);
    //                 }
    //                 dp[i][j] = ans;
    //             }
    //         }
    //         return dp[0][0];
    //     }

    int solve(string a, string b)
    {
        vector<int> curr(b.length() + 1, 0);
        vector<int> next(b.length() + 1, 0);

        for (int i = a.length() - 1; i >= 0; i--)
        {
            for (int j = b.length() - 1; j >= 0; j--)
            {
                int ans = 0;
                if (a[i] == b[j])
                {
                    ans = 1 + next[j + 1];
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

    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        // vector<vector<int>>dp(text1.length() + 1, vector<int>(text2.length() + 1, -1));
        // return solve(text1, text2, 0, 0, dp);

        return solve(s1, s2);
    }
};

//leetcode
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