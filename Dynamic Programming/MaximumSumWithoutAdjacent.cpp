#include <iostream>
#include <vector>
using namespace std;
// simple recusion
int solve(vector<int> v, int indx)
{
    // base case
    if (indx >= v.size())
    {
        return 0;
    }
    // recursive case
    int include = v[indx] + solve(v, indx + 2);
    int exclude = 0 + solve(v, indx + 1);
    return max(include, exclude);
}

// Top down
int solveMem(vector<int> v, int indx, vector<int> &dp)
{
    // base case
    if (indx >= v.size())
    {
        return 0;
    }
    if (dp[indx] != -1)
    {
        return dp[indx];
    }
    // recursive case
    int include = v[indx] + solve(v, indx + 2);
    int exclude = 0 + solve(v, indx + 1);
    return dp[indx] = max(include, exclude);
}

int solveTab(vector<int>v)
{
    int n = v.size();
    vector<int>dp(n + 2, 0);
    for(int indx = n - 1; indx >= 0; indx--)
    {
        int include = v[indx] + dp[indx + 2];
        int exclude = 0 + dp[indx + 1];
        dp[indx] = max(include, exclude);       
    }
    return dp[0];
}

int solveSO(vector<int>v)
{
    int n = v.size();
    int next1 = 0,next2= 0,curr =0;
    for(int indx = n - 1; indx >= 0; indx--)
    {
        int include = v[indx] + next2;
        int exclude = 0 + next1;
        curr = max(include, exclude); 
        next2 = next1;
        next1 = curr;      
    }
    return curr;    
}
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(9);

    cout << "Maximum sum by simple recursion:- " << solve(v, 0) << endl;

    vector<int> dp(v.size() + 1, -1);
    cout << "Maximum sum by Top down:- " << solveMem(v, 0, dp) << endl;

    cout << "Maximum sum by Bottom Up:- " << solveTab(v) << endl;

    cout<<"Space optimization:- "<<solveSO(v)<<endl;
    return 0;
}