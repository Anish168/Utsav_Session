#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int solvetab(string text1, string text2, int n, int m)
{
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int ans = 0;
            if (text1[i - 1] == text2[j - 1])
            {
                ans = 1 + dp[i - 1][j - 1];
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
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    return dp[n][m];
}
void lcs(string s1, string s2)
{

    int n = s1.size();
    int m = s2.size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 0; i <= m; i++)
    {
        dp[0][i] = 0;
    }

    for (int ind1 = 1; ind1 <= n; ind1++)
    {
        for (int ind2 = 1; ind2 <= m; ind2++)
        {
            if (s1[ind1 - 1] == s2[ind2 - 1])
                dp[ind1][ind2] = 1 + dp[ind1 - 1][ind2 - 1];
            else
                dp[ind1][ind2] = 0 + max(dp[ind1 - 1][ind2], dp[ind1][ind2 - 1]);
        }
    }

    int i = n;
    int j = m;

    string str = "";

    while (i > 0 && j > 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            str += s1[i - 1];
            i--;
            j--;
        }
        else if (s1[i - 1] > s2[j - 1])
        {
            i--;
        }
        else
            j--;
    }
    reverse(str.begin(), str.end());
    cout << str;
}

int main()
{

    string s1 = "abcde";
    string s2 = "bdgek";

    solvetab(s1, s2, s1.size(), s2.size());
    cout << "The Longest Common Subsequence is ";
    lcs(s1, s2);
}