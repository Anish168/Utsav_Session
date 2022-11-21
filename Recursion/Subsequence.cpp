#include <iostream>
using namespace std;
int count = 0;
void subsequence(char inputarr[], char outputarr[], int i, int j)
{
    // base case
    if (inputarr[i] == '\0')
    {
        outputarr[j] = '\0';
        count++;
        cout << outputarr << endl;
        return;
    }

    // recursive case
    // without a krna h phle means recursion tum mujhe bc k subsequence de do
    subsequence(inputarr, outputarr, i + 1, j);

    // with a
    outputarr[j] = inputarr[i];

    // recursion ab mujhe tum bc k phir se subsequence de do
    subsequence(inputarr, outputarr, i + 1, j + 1);
}
int main()
{
    char inputarr[100], outputarr[100];
    cin >> inputarr;
    subsequence(inputarr, outputarr, 0, 0);
    cout << count << endl;
    return 0;
}