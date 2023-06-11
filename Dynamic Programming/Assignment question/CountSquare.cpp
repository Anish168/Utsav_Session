// GFG:- https://practice.geeksforgeeks.org/problems/count-square-submatrices-with-all-ones/1?

class Solution {
  public:
    int countSquares(int n, int m, vector<vector<int>> &arr) {
        // code here
        vector<vector<int>> dp(n, vector<int>(m, 0));
        for (int j = 0; j < m; j++) dp[0][j] = arr[0][j];
        for (int i = 0; i < n; i++) dp[i][0] = arr[i][0];
    
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (arr[i][j] == 0) dp[i][j] = 0;
                else {
                    dp[i][j] = 1 + min(dp[i - 1][j],
                                       min(dp[i - 1][j - 1], dp[i][j - 1]));
                }
            }
        }
    
        int sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                sum += dp[i][j];
            }
        }
        return sum;
    }

};

// LEETCODE:- https://leetcode.com/problems/count-square-submatrices-with-all-ones/
class Solution {
public:
    int countSquares(vector<vector<int>>& arr) {
        vector<vector<int>> dp(arr.size(), vector<int>(arr[0].size(), 0));
        for (int j = 0; j < arr[0].size(); j++) dp[0][j] = arr[0][j];
        for (int i = 0; i < arr.size(); i++) dp[i][0] = arr[i][0];

        for (int i = 1; i < arr.size(); i++) {
            for (int j = 1; j < arr[0].size(); j++) {
                if (arr[i][j] == 0) dp[i][j] = 0;
                else {
                    dp[i][j] = 1 + min(dp[i - 1][j],
                                       min(dp[i - 1][j - 1], dp[i][j - 1]));
                }
            }
        }

        int sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr[0].size(); j++) {
                sum += dp[i][j];
            }
        }
        return sum;    
    }
};