#include <iostream>
using namespace std;
int power(int x, int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }

    // recursive case
    return x * power(x, n - 1);
}
int main()
{
    int x, n;
    cin >> x >> n; // 2^4;
    cout << "Power of " << x << " to the power " << n <<" is "<< power(x, n) << endl;
    return 0;
}