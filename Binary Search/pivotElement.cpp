#include <iostream>
using namespace std;
int pivot(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int mid = (start + end)/2;
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}
int main()
{
    int arr[] = {11, 12, 15, 18, 2, 5, 6, 8};
    int n = sizeof(arr) / sizeof(int);
    cout << "Pivot element is: " << pivot(arr, n) << endl;

    return 0;
}