#include <iostream>
using namespace std;
int main()
{
    int arr[100][100];
    int row, col;
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            if (r < c)
            {
                swap(arr[r][c], arr[c][r]);
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}