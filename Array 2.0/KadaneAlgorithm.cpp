#include <iostream>
using namespace std;
int maximumSum(int arr[], int n)
{
    int cs = 0;
    int os = 0;
    for (int i = 0; i < n; i++)
    {
        if (cs < 0)
        {
            cs = arr[i];
        }
        else
        {
            cs = cs + arr[i];
        }

        if (cs > os)
        {
            os = cs;
        }
    }
    return os;
}
int main()
{
    int arr[] = {5, 4, -1, 7, 8};
    int n = sizeof(arr) / sizeof(int);
    cout << "The maximum subarray is: " << maximumSum(arr, n) << endl;
    return 0;
}