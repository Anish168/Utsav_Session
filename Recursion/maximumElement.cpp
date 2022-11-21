#include <iostream>
using namespace std;
int maximum(int *arr, int n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }

    // recursive case
    int maxi = maximum(arr + 1, n - 1);
    if (arr[0] > maxi)
    {
        return arr[0];
    }
    return maxi;
}
int main()
{
    int arr[] = {63, 32, 12, 14, 15};
    int n = sizeof(arr) / sizeof(int);
    cout << "The maximum element is: " << maximum(arr, n) << endl;
    return 0;
}