#include <iostream>
using namespace std;
int ways(int i, int j)
{
    // base case
    if (i == 0 && j == 0)
    {
        return 1;
    }

    if (j < 0)
    {
        return 0;
    }

    if (i < 0)
    {
        return 0;
    }

    // recursive case
    return ways(i, j - 1) + ways(i - 1, j);
}
int main()
{
    int m, n;
    cin >> m >> n; // destination 4,4
    cout << "Total number of ways to reach the destination: " << ways(m, n) << endl;
    return 0;
}