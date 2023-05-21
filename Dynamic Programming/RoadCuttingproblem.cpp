#include <iostream>
#include <vector>
using namespace std;
// simple recusion
int solve(int n, int a, int b, int c)
{
    // base case
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return -1e9;
    }

    // recurisve case
    int first = solve(n - a, a, b, c);
    int second = solve(n - b, a, b, c);
    int third = solve(n - c, a, b, c);

    return max(first, max(second, third)) + 1;
}

int main()
{
    int n;
    cin >> n;
    int a = 10, b = 11, c = 3;
    cout << "Maimum cut can be by using simple recursion: " << solve(n, a, b, c) << endl;

    return 0;
}