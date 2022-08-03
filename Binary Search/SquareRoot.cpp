#include <iostream>
using namespace std;
int squareRoot(int x)
{
    int start = 0;
    int end = x-1;
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        int square = mid * mid;
        if (square == x)
        {
            return mid;
        }
        else if (square > x)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int x;
    cin >> x;
    cout << "The Sqaure root is " << squareRoot(x) << endl;
    return 0;
}