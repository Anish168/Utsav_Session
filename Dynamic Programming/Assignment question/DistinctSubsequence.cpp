class Solution {
public:
    //0 based indexing
//     int solve(int i, int j, string s, string t)
//     {
//         //base case
//         if(i < 0) return 0;
//         if(j < 0) return 1;
        
        
//         //recursive case
//         if(s[i] == t[j])
//         {
//             return solve(i - 1, j - 1, s, t) + solve(i - 1, j, s, t);
//         }
    //match nhi kra
    
//         return solve(i - 1, j, s, t);
        
//     }
    
    //0 based indexing
    int countUtil(string &s1, string &s2, int ind1, int ind2,vector<vector<int>>& dp){
        if(ind2<0)
            return 1;
        if(ind1<0)
            return 0;

        if(dp[ind1][ind2]!=-1)
            return dp[ind1][ind2];

        if(s1[ind1]==s2[ind2]){
            int leaveOne = countUtil(s1,s2,ind1-1,ind2-1,dp);
            int stay = countUtil(s1,s2,ind1-1,ind2,dp);

            return dp[ind1][ind2] = (leaveOne + stay);
        }

        else{
            return dp[ind1][ind2] = countUtil(s1,s2,ind1-1,ind2,dp);
        }
    }
    
    //1 based indexing
    int countUtil(string s1, string s2, int n, int m)  
    {
        vector<vector<double>>dp(n + 1, vector<double>(m + 1, 0));
        
        for(int i=0; i<= n; i++){
            
            dp[i][0] = 1;
        }
        for(int j =1; j <= m; j++){
            
            dp[0][j] = 0;
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1;j <= m; j++){

                if(s1[i-1]==s2[j-1])
                    dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]);
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[n][m];
    }
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        // return solve(n - 1, m - 1, s, t);
        vector<vector<int>>dp(n + 1, vector<int>(m + 1, -1));
        // return countUtil(s, t, n - 1, m - 1,dp);
        return countUtil(s, t, n, m);
    }
};