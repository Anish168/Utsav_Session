#include <iostream>
using namespace std;
bool isPresent(int *arr, int n)
{
    // base case
    if (n == 0)
    {
        return false;
    }

    // recursive case
    if (arr[0] == 7)
    {
        return true;
    }
    return isPresent(arr + 1, n - 1);
}
int main()
{
    int arr[] = {8, 6, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);
    if (isPresent(arr, n))
    {
        cout << "Yes 7 is present. " << endl;
    }
    else
    {
        cout << "Not present. " << endl;
    }

    return 0;
}