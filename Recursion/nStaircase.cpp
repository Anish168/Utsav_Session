#include <iostream>
using namespace std;

// at max jump 3
// int nStaircase(int n)
// {
//     // base case
//     if (n == 0)
//     {
//         return 1;
//     }

//     if (n < 0)
//     {
//         return 0;
//     }

//     // recursive case
//     return nStaircase(n - 1) + nStaircase(n - 2) + nStaircase(n - 3);
// }
int nstaircasegeneral(int n, int max)
{
    // base case
    if (n == 0)
    {
        return 1;
    }

    if (n < 0)
    {
        return 0;
    }

    // recursive case
    int sum = 0;
    for (int i = 1; i <= max; i++)
    {
        sum = sum + nstaircasegeneral(n - i, max);
    }
    return sum;
}
int main()
{
    int n;
    cin >> n; // 4
    int max;
    cin >> max;
    // cout << "No. of ways: " << nStaircase(n) << endl;
    cout << "No. of ways: " << nstaircasegeneral(n, max) << endl;
    return 0;
}