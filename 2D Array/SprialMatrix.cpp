#include <iostream>
using namespace std;
void spiralprint(int arr[1000][1000], int row, int col)
{
    int start_row = 0, end_row = row - 1;

    int start_col = 0, end_col = col - 1;
    while (start_row <= end_row && start_col <= end_col)
    { //1st row
        for (int k = start_col; k <= end_col; k++)
        {
            cout << arr[start_row][k] << " ";
        }

        start_row++;

        //last column
        for (int l = start_row; l <= end_row; l++)
        {
            cout << arr[l][end_col] << " ";
        }

        end_col--;

        //last row
        for (int m = end_col; m >= start_col; m--)
        {
            cout << arr[end_row][m] << " ";
        }

        end_row--;

        //1st column
        for (int n = end_row; n >= start_row; n--)
        {
            cout << arr[n][start_col] << " ";
        }
        start_col++;
    }
}

int main()
{
    int arr[1000][1000];
    int row, col;
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    spiralprint(arr, row, col);
    return 0;
}