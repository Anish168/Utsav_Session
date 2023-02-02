#include <iostream>
#include "createStackHeaderFile.h"
using namespace std;
int main()
{
    stack<char> ch;
    ch.push('A');
    ch.push('N');
    ch.push('U');
    ch.push('T');
    ch.push('S');

    ch.pop();

    cout << ch.top() << endl;
    return 0;
}