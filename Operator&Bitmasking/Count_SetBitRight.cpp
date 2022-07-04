#include <iostream>
using namespace std;
int main()
{
    int no;
    cin >> no; // 10
    int countsetbit = 0;
    while (no != 0)
    {
        if ((no & 1) > 0)
        {
            countsetbit++;
        }
        no = no >> 1;
    }
    cout << "Total number of bit is " << countsetbit << endl;

    return 0;
}