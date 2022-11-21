#include <iostream>
#include <math.h>
using namespace std;
bool kyamainumdalsktahu(int mat[9][9], int i, int j, int num, int n)
{
    // row
    for (int k = 0; k < n; k++)
    {
        if (mat[i][k] == num)
        {
            // means wo number already present h.
            return false;
        }
    }

    // column
    for (int k = 0; k < n; k++)
    {
        if (mat[k][j] == num)
        {
            // means wo number already present h.
            return false;
        }
    }

    // root x root
    int p = sqrt(n); // 3
    int si = (i / p) * p;
    int sj = (j / p) * p;

    for (int o = si; o < si + p; o++)
    {
        for (int u = sj; u < sj + p; u++)
        {
            if (mat[o][u] == num)
            {
                return false;
            }
        }
    }

    return true;
}
bool solverSudoko(int mat[9][9], int i, int j, int n)
{
    // base case
    if (i == n)
    {
        for (int l = 0; l < n; l++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << mat[l][k] << " ";
            }
            cout << endl;
        }
        return true;
    }

    // recursive case

    if (j == n)
    {
        solverSudoko(mat, i + 1, 0, n);
    }

    if (mat[i][j] != 0)
    {
        solverSudoko(mat, i, j + 1, n);
    }

    // loop
    for (int num = 1; num <= 9; num++)
    {
        if (kyamainumdalsktahu(mat, i, j, num, n) == true)
        {
            mat[i][j] = num;
            bool kyatumsolvekrpaye = solverSudoko(mat, i, j + 1, n); // tum represent recursion bhai
            if (kyatumsolvekrpaye == true)
            {
                return true;
            }
            mat[i][j] = 0;
        }
    }
    return false;
}
int main()
{
    int mat[9][9] = {{7, 8, 0, 4, 0, 0, 1, 2, 0},
                     {6, 0, 0, 0, 7, 5, 0, 0, 9},
                     {0, 0, 0, 6, 0, 1, 0, 7, 8},
                     {0, 0, 7, 0, 4, 0, 2, 6, 0},
                     {0, 0, 1, 0, 5, 0, 9, 3, 0},
                     {9, 0, 4, 0, 6, 0, 0, 0, 5},
                     {1, 7, 0, 3, 0, 0, 0, 1, 2},
                     {0, 2, 0, 0, 0, 7, 4, 0, 0},
                     {0, 4, 9, 2, 0, 6, 0, 0, 7}};

    solverSudoko(mat, 0, 0, 9);
    return 0;
}