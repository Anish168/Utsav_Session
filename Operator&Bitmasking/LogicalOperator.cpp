#include <iostream>
using namespace std;
int main()
{
    // int a = 10;
    // int b = 5;
    int a = 0;
    int b = 1;
    // if (b < 0 && a++)
    // {
    //     b++;
    // }
    // if (b > 0 && a++)
    // {
    //     b++;
    // }
    // if (b < 0 || a++)
    // {
    //     b++;
    // }
    if (b > 0 || a++)
    {
        b++;
    }

    cout << a << endl;
    cout << b << endl;

    return 0;
}