#include <iostream>
using namespace std;
int sum[100];
void prefixSum(int *arr, int n)
{
    sum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        sum[i] = sum[i-1] + arr[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << sum[i] << " ";
    // }
}
int totalSum(int min, int max)
{
    if (min == 0)
    {
        return sum[max];
    }
    else
    {
        return sum[max] - sum[min - 1];
    }
}
int main()
{
    int arr[] = {1, 2, 5, 6, 8};
    int n = sizeof(arr) / sizeof(int);
    prefixSum(arr, n);
    int max, min;
    cin >> min >> max;
    cout << "Sum is " << totalSum(min, max);
    return 0;
}