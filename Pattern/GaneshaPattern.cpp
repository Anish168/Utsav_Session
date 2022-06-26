#include <iostream>
using namespace std;
int main()
{
    int n; // n=4
    cin >> n;

    // 1st task
    for (int row = 1; row <= 1; row++)
    {
        // star
        cout << "*";

        // spaces
        for (int space = 1; space <= n - 1; space++)
        {
            cout << " ";
        }

        // star
        for (int star = 1; star <= n; star++)
        {
            cout << "*";
        }
    }
    cout << endl;

    // 2nd task
    for (int row = 1; row <= n - 2; row++)
    {
        // star
        cout << "*";

        // space
        for (int space = 1; space <= n - 1; space++)
        {
            cout << " ";
        }

        // star
        cout << "*";
        cout << endl;
    }

    // 3rd task
    for (int star = 1; star <= (2 * n) - 1; star++)
    {
        cout << "*";
    }
    cout << endl;

    // 2nd half
    // 4th task
    for (int row = 1; row <= n - 2; row++)
    {
        // space

        for (int space = 1; space <= n - 1; space++)
        {
            cout << " ";
        }

        // star
        cout << "*";

        // space
        for (int space = 1; space <= n - 2; space++)
        {
            cout << " ";
        }

        cout << "*";
        cout << endl;
    }

    // 5th task
    // star
    for (int star = 1; star <= n; star++)
    {
        cout << "*";
    }

    // space
    for (int space = 1; space <= n - 2; space++)
    {
        cout << " ";
    }

    // star
    cout << "*";
    cout << endl;
    return 0;
}