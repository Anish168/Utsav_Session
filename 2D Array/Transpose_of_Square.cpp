#include <iostream>
using namespace std;

int main()
{
    int arr[100][100];
    int rows, cols;
    cin >> rows >> cols;
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            cin >> arr[r][c];
        }
    }

    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            if (r < c)
            {
                swap(arr[r][c], arr[c][r]);
            }
        }
        cout << endl;
    }

    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            cout << arr[r][c] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}