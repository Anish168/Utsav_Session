#include <iostream>
using namespace std;
int main()
{
    int n; // n=3
    cin >> n;

    // increasing star
    // for (int row = 1; row <= n; row++)
    // {
    //     // spaces
    //     for (int space = 1; space <= n - row; space++)
    //     {
    //         cout << " ";
    //     }

    //     // star
    //     for (int star = 1; star <= 2 * row - 1; star++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // // decreasing star
    // for (int row = 1; row <= n - 1; row++)
    // {
    //     // spaces
    //     for (int space = 1; space <= row; space++)
    //     {
    //         cout << " ";
    //     }

    //     // stars
    //     for (int star = 1; star <= 2 * (n - row) - 1; star++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // increasing
    int row = 1;
    while (row <= n)
    {
        // spaces
        int countspace = 1;
        while (countspace <= n - row)
        {
            cout << " ";
            countspace++;
        }

        // stars
        int countstar = 1;
        while (countstar <= (2 * row) - 1)
        {
            cout << "*";
            countstar++; // countstar=countstar+1;
        }
        row++;
        cout << endl;
    }

    // decreasing
    int decrow = 1;
    while (decrow <= n - 1) // row<n
    {
        // spaces
        int countspace = 1;
        while (countspace <= decrow)
        {
            cout << " ";
            countspace++;
        }

        // star
        int countstar = 1;
        while (countstar <= 2 * (n - decrow) - 1)
        {
            cout << "*";
            countstar++;
        }

        decrow++;
        cout << endl;
    }
    return 0;
}