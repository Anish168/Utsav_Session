#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; // n=5 conditions: n will be odd and every number will be twice except one number
    int no;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> no; // 2 1 2 6 6  //input buffer
        ans = ans ^ no;
    }
    cout << "Unique number is " << ans << endl;

    return 0;
}