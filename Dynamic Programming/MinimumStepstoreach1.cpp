#include <iostream>
#include <vector>
using namespace std;
// simple recusion
int solve(int n)
{
    // base case
    if (n == 1)
    {
        return 0;
    }
    // recursive case
    int op1 = 1e9, op2 = 1e9, op3 = 1e9;
    op1 = solve(n - 1);
    if (n % 2 == 0)
    {
        op2 = solve(n / 2);
    }
    if (n % 3 == 0)
    {
        op3 = solve(n / 3);
    }
    return min(op1, min(op2, op3)) + 1;
}
int main()
{
    int n;
    cin >> n;
    cout << "Minimum steps to reach 1:- " << solve(n) << endl;
    return 0;
}