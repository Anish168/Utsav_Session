#include <iostream>
using namespace std;
int solve(int *coins, int amount, int n)
{
    // base case
    if (amount == 0)
    {
        return 0;
    }

    // recursive case
    int ans = 1e9;
    for (int i = 0; i < n; i++) // coins wale array m traverse krega
    {
        if (amount - coins[i] >= 0)
        {
            int chotamount = amount - coins[i];
            int chotans = solve(coins, chotamount, n);
            if (chotans < ans)
            {
                ans = chotans;
            }
        }
    }
    return ans + 1; //+1 kyuki ek toh humne bhi kra h
}
int main()
{
    int coins[] = {1, 7, 10};
    int amount;
    cin >> amount;
    int n = sizeof(coins) / sizeof(int);
    cout << "Minimum coin required by simple recursion:- " << solve(coins, amount, n) << endl;
    return 0;
}