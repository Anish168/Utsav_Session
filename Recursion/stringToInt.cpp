#include <iostream>
using namespace std;
int stringToInt(string s, int l)
{
    // base case
    if (l == 0)
    {
        return 0;   //agar length hi zero ho gyi toh neeche se 0 return krega
    }

    // recursive case
    int digit = s[l - 1] - '0'; // string se int m convert kr rha hu
                                //  s[4-1]-'0' --> s[3]-'0' --> '8'-'0' --> 56 - 48 -->8
    return stringToInt(s, l - 1) * 10 + digit;
}
int main()
{
    string s;
    cin >> s;                // 5648
    int length = s.length(); // 4
    cout << "String to int origibnal: " << stringToInt(s, length) << endl;
    cout << "string to int testing: " << stringToInt(s, length) + 100 << endl;
    ;

    return 0;
}