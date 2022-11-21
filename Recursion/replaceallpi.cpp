#include <iostream>
using namespace std;
string replaceallpi(string s)
{
    // base case
    if (s.length() == 0)
    {
        return "";
    }

    // recursive case
    string merans = s.substr(0, 2);
    if (merans == "pi")
    {
        return "3.14" + replaceallpi(s.substr(2));
    }
    else
    {
        return s[0] + replaceallpi(s.substr(1));
    }
}
int main()
{
    string s;
    cin >> s;
    cout << "Replace all pi : " << replaceallpi(s);
    return 0;
}