#include <iostream>
using namespace std;
int pivot(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int mid = (start + end) / 2;
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
int binarySearch(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;

    // loop
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    // loop k bhr aaya h ishka mtlb element nhi mila
    return -1;
}
int searchRotated(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int index = pivot(arr, n);
        // cout << index << endl;
        if (arr[index] == key)
        {
            return index;
        }
        else if (arr[index] < key && key < arr[n - 1])
        {
            return binarySearch(arr, index + 1, end, key);
        }
        else
        {
            return binarySearch(arr, start, index - 1, key);
        }
    }
}
int main()
{
    int arr[] = {11, 12, 15, 18, 2, 5, 6, 8};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    cout << "The index is present at: " << searchRotated(arr, n, key);
    return 0;
}