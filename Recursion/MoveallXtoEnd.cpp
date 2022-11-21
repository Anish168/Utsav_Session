#include <iostream>
using namespace std;
string moveallxatend(string s)
{
    // base case
    if (s.length() == 0)
    {
        return "";
    }

    // recursive case
    char merans = s[0];                          // x
    string chotans = moveallxatend(s.substr(1)); // abcxxx
    if (merans == 'x')
    {
        return chotans + merans;
    }
    else
    {
        return merans + chotans;
    }
}
int main()
{
    string s;
    cin >> s; // xabxcxx
    cout << "Now the string will be: " << moveallxatend(s) << endl;
    return 0;
}