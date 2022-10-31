#include <iostream>
using namespace std;

int main()
{
    // char arr[][3] = {
    //     {'D', 'O', 'G'},
    //     {'A', 'B', 'C'},
    //     {'G', 'O', 'D'}};
    char arr[][4] = {
        {'D', 'O', 'G', '\0'},
        {'A', 'B', 'C', '\0'},
        {'G', 'O', 'D', '\0'}};

    // char ch[] = {'d', 'e', 'f'};
    // cout << ch << endl;
    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}