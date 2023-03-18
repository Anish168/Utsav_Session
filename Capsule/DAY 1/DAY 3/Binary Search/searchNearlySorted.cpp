#include <iostream>
using namespace std;
int searchNearly(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (mid - 1 >= start && key == arr[mid - 1])
        {
            return mid - 1;
        }
        else if (mid + 1 <= end && key == arr[mid + 1])
        {
            return mid + 1;
        }
        else if (key > arr[mid + 1])
        {
            start = mid + 2;
        }
        else
        {
            end = mid - 2;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {5, 10, 30, 20, 40};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    cout << searchNearly(arr, n, key);
    return 0;
}