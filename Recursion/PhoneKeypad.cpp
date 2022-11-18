#include <iostream>
using namespace std;
char arr[][100] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
void phnkypad(char inputarr[100], int i, char output[100], int j)
{
    // base case
    if (inputarr[i] == '\0')
    {
        output[j] = '\0';
        cout << output << endl;
        return;
    }

    // recursive case
    char ch = inputarr[i]; //'3'
    int button = ch - '0'; // 3

    for (int k = 0; arr[button][k]!='\0'; k++)
    {
        output[j] = arr[button][k]; // arr[2][0]-->'A'  //arr[3][0]--->'D' //arr[3][1]-->'E'
        phnkypad(inputarr, i + 1, output, j + 1);
    }
}
int main()
{
    char inputarr[100];
    cin >> inputarr; // 23
    char output[100];
    cin >> output;
    phnkypad(inputarr, 0, output, 0);
    return 0;
}