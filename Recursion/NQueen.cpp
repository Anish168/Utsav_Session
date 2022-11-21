#include <iostream>
using namespace std;
bool kyaqueenplacekrsktahu(int board[20][20], int i, int j, int n)
{
    // row

    // for (int k = 0; k < n; k++)
    // {
    //     if (board[i][k] == 1)
    //     {
    //         return false;
    //     }
    // }

    // column
    for (int l = 0; l < n; l++)
    {
        if (board[l][j] == 1)
        {
            return false;
        }
    }

    int t = i;
    int u = j;
    // diagonal right
    // loop
    while (i >= 0 && j < n)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
        i--; // 1 0 -1
        j++; // 2 3 4
    }

    // diagonal left
    while (t >= 0 && u >= 0)
    {
        if (board[t][u] == 1)
        {
            return false;
        }
        t--;
        u--;
    }

    return true;
}
bool nQueen(int board[20][20], int n, int i)
{
    // base case
    if (i == n)
    {
        for (int l = 0; l < n; l++)
        {
            for (int k = 0; k < n; k++)
            {
                if (board[l][k] == 1)
                {
                    cout << "Q ";
                }
                else
                {
                    cout << "- ";
                }
            }
            cout << endl;
        }
        cout<<endl;
        // return true;
        return false;
    }

    // recursive case
    for (int j = 0; j < n; j++)
    {
        if (kyaqueenplacekrsktahu(board, i, j, n) == true)
        {
            board[i][j] = 1;
            bool kyaRecursionQueenPlaceHopayi = nQueen(board, n, i + 1);
            if (kyaRecursionQueenPlaceHopayi == true)
            {
                return true;
            }
            board[i][j] = 0; // backtracking
        }
    }
    return false;
}
int main()
{
    int board[20][20];
    int n; // number of queens
    cin >> n;
    nQueen(board, n, 0);
    return 0;
}