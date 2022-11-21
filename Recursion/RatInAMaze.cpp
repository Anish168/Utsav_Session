#include <iostream>
using namespace std;
char sol[20][20] = {0};
int count = 0;
bool ratinamaze(char maze[20][20], int row, int column, int i, int j)
{
    // base case
    if (i == row - 1 && j == column - 1)
    {
        sol[i][j] = 1;
        for (int k = 0; k < row; k++)
        {
            for (int l = 0; l < column; l++)
            {
                cout << sol[k][l] << " ";
            }
            cout << endl;
        }
        count++;
        // return true;
        cout << endl;
        return false;
    }

    // recursive base
    sol[i][j] = 1; // wo mere path ka part h means src

    // ab right move krne se phle check krunga ki khi right m X toh nhi h
    if (j + 1 < column && maze[i][j + 1] != 'X')
    {
        // agar x nhi hua toh hi mai right move kr skta hu
        // ab mai recursion ko khunga ki tum right se ans de pa rhe ho ya nhi
        bool kyarightseansmila = ratinamaze(maze, row, column, i, j + 1);
        if (kyarightseansmila == true)
        {
            return true;
        }
    }

    // agar mai right nhi ja paya toh down jaunga or jane se phle mai check krunga mki khgi wo X toh nhi h
    if (i + 1 < row && maze[i + 1][j] != 'X')
    {
        // agar mai ishke andr aaya means mai down move kr skta hu
        // ab mai recursion ko bolunga ki recurison tum mujhe down se path de pa rhe ho ya nhi
        bool kyadownseansmila = ratinamaze(maze, row, column, i + 1, j);
        if (kyadownseansmila == true)
        {
            return true;
        }
    }

    sol[i][j] = 0; // Backtrack
    return false;
}

int main()
{
    char maze[20][20] = {
        "OOOO",
        "OOOX",
        "OOXO",
        "OOOO"};

    ratinamaze(maze, 4, 4, 0, 0);
    cout << "Total is: " << count << endl;
    return 0;
}