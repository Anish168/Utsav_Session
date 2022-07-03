#include <iostream>
using namespace std;
int main()
{
    int y = 1;
    int x = y++;
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;

    x=y;
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;
    // int y = 1;
    // int x = ++y;
    // cout << "x is " << x << endl;
    // cout << "y is " << y << endl;

    return 0;
}