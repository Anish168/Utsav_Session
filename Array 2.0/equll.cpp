#include <iostream>
using namespace std;
int equi(int arr[], int n)
{
    int left = 0;
    int right = 0;
    for (int i = 0; i < n; i++)
    {
        right = right + arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        if (j == 0)
        {
            left = 0;
            right = right - arr[j];
        }
        else
        {
            left = left + arr[j - 1];
            right = right - arr[j];
        }

        if (left == right)
        {
            return j;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1,1,1,1};
    int n = sizeof(arr) / sizeof(int);
    cout << "The index is: " << equi(arr, n);
    return 0;
}