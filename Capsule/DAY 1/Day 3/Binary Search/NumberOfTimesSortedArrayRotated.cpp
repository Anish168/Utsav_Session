#include <iostream>
using namespace std;
int pivot(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        int next = (mid + 1) % n;
        int prev = (mid + n - 1) % n;
        if (arr[mid] <= arr[next] && arr[mid] <= arr[prev])
        {
            return mid;
        }
        else if (arr[start] <= arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}

int main()
{
    int arr[] = {11, 12, 15, 18, 2, 5, 6, 8};
    int n = sizeof(arr) / sizeof(int);
    cout << "Pivot element is: " << pivot(arr, n) << endl;
    return 0;
}