#include <iostream>
using namespace std;
int main()
{
    int i = 5;
    int y = (i++)++;
    // int y= ++(++i); //preincrement
    cout << y;
    return 0;
}