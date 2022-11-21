#include <iostream>
using namespace std;
// int start = 0;
// int end = n - 1;

// // loop
// while (start <= end)
// {
//     int mid = (start + end) / 2;
//     if (arr[mid] == key)
//     {
//         return mid;
//     }
//     else if (arr[mid] < key)
//     {
//         start = mid + 1;
//     }
//     else
//     {
//         end = mid - 1;
//     }
// }
int binarySearchRec(int *arr, int n, int start, int end, int key)
{
    // base case
    if (start > end)
    {
        return -1;
    }

    // recurisve case
    int mid = (start + end) / 2;
    // int mid = start + (end - start) / 2;
    if (key == arr[mid])
    {
        return mid;
    }
    else if (key < arr[mid])
    {
        binarySearchRec(arr, n, start, mid - 1, key);
    }
    else
    {
        binarySearchRec(arr, n, mid + 1, end, key);
    }
}
int main()
{
    int arr[] = {3, 5, 7, 9, 12};
    int n = 5;
    int key;
    cin >> key;
    cout << "Element is present at index: " << binarySearchRec(arr, n, 0, n - 1, key) << endl;
    return 0;
}