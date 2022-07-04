#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int no;
    int abhitaklargest = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> no;
        if (no > abhitaklargest)
        {
            abhitaklargest = no;
        }
    }
    cout << "The largest of 5 number is " << abhitaklargest << endl;
    return 0;
}