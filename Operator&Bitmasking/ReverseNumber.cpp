#include <iostream>
using namespace std;
int main()
{
    int no;
    cin >> no; // 986
    int rev = 0;
    int rem = 0;

    // loop
    while (no != 0)
    {
        rem = no % 10;        // 986 %10 --> 6,  98 %10 --> 8, 9 % 10 --> 9
        rev = rev * 10 + rem; // 0 * 10 + 6 --> 6 , 6 * 10+ 8 --> 68, 68 * 10 + 9 --> 689
        no = no / 10;         // 986 /10 --> 98,   98 /10 --> 9 , 9 / 10 --> 0
    }

    cout << " Reverse number is " << rev << endl;

    return 0;
}