class Solution {
public:
//     int solve(string a, string b, int i, int j)
//     {
//         //base case
//         if(i == a.length())
//         {
//             return b.length() - j;
//         }
//         if(j == b.length())
//         {
//             return a.length() - i;
//         }
        
        
//         //recursive case
//         int ans = 0;
    //match
//         if(a[i] == b[j])
//         {
//             ans = solve(a, b, i+1, j+1);
//         }
    //dont match
//         else
//         {
//             int insert = solve(a, b, i, j+1);
//             int delete = solve(a, b, i+1, j+1);
//             int replace = solve(a, b, i+1, j);
//             ans = min(insert, min(delete, replace)) + 1;
//         }
//         return ans;
//     }
//     int solve(string a, string b, int i, int j, vector<vector<int>>&dp)
//     {
//         //base case
//         if(i == a.length())
//         {
//             return b.length() - j;
//         }
//         if(j == b.length())
//         {
//             return a.length() - i;
//         }
        
        
//         //recursive case
//         if(dp[i][j] != -1)
//         {
//             return dp[i][j];
//         }
//         int ans = 0;
//         if(a[i] == b[j])
//         {
//             ans = solve(a, b, i+1, j+1, dp);
//         }
//         else
//         {
//             int op1 = solve(a, b, i, j+1, dp);
//             int op2 = solve(a, b, i+1, j+1, dp);
//             int op3 = solve(a, b, i+1, j, dp);
//             ans = min(op1, min(op2, op3)) + 1;
//         }
//         return dp[i][j] = ans;
//     }
    
    int solveTab(string a, string b)
    {
        vector<vector<int>>dp(a.length() + 1, vector<int>(b.length() + 1, 0));         
        for(int j = 0; j < b.length(); j++)
        {
            dp[a.length()][j] = b.length() - j;
        }
        for(int i = 0; i < a.length(); i++)
        {
            dp[i][b.length()] = a.length() - i;
        }
        
        for(int i = a.length() - 1; i >= 0; i--)
        {
            for(int j = b.length() - 1; j >= 0; j--)
            {
                int ans = 0;
                if(a[i] == b[j])
                {
                    ans = dp[i+1][j+1];
                }
                else
                {
                    int op1 = dp[i][j+1];
                    int op2 = dp[i+1][j+1];
                    int op3 = dp[i+1][j];
                    ans = min(op1, min(op2, op3)) + 1;
                }
                dp[i][j] = ans;                
            }
        }
        return dp[0][0];
        
    }
    
    int minDistance(string word1, string word2) {
        // return solve(word1, word2, 0, 0);
        // vector<vector<int>>dp(word1.length() + 1, vector<int>(word2.length() + 1, -1));
        // return solve(word1, word2, 0, 0, dp);
        return solveTab(word1, word2);

    }
};