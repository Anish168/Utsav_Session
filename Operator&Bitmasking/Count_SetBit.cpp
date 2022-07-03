#include <iostream>
using namespace std;
int main()
{
    int mask = 1;
    int no;
    cin >> no; // 10
    int countSetBit = 0;
    for (int i = 1; i <= 31; i++)
    {
        if ((no & mask) > 0)
        {
            countSetBit++;
        }
        mask = mask * 2;
    }
    cout << "Total Set bit in " << no << " is " << countSetBit << endl;

    return 0;
}