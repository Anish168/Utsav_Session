#include <iostream>
using namespace std;
int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};
    // int row, col;
    // cin >> row >> col;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cin >> arr[row][col];
    //     }
    // }

    for (int c = 0; c < 4; c++)
    {
        if (c % 2 == 0) // agar column even h toh top to bottomn print krna h
        {
            for (int r = 0; r < 4; r++)
            {
                cout << arr[r][c] << " ";
            }
            cout << endl;
        }
        else // agar column odd h toh bottom to top print krna h
        {
            for (int r = 4 - 1; r >= 0; r--)
            {
                cout << arr[r][c] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}