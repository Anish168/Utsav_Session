#include <iostream>
using namespace std;
// Approach 1
// bool arraySorted(int *arr, int n)
// {
//     // base case
//     if (n == 1)
//     {
//         return true;
//     }

//     // recursive case
//     //  sbse phle mai kaam krunga
//     if (arr[0] < arr[1] && arraySorted(arr + 1, n - 1) == true)
//     {
//         return true;
//     }
//     return false;
// }

// Approach 2
// bool arraySorted(int *arr, int n)
// {
//     // base case
//     if (n == 1)
//     {
//         return true;
//     }

//     // recursive case
//     //  sbse phle recursion kaam krega
//     if (arraySorted(arr, n - 1) && arr[n - 2] < arr[n - 1])
//     {
//         return true;
//     }
//     return false;
// }

// Approach3
bool arraySorted(int *arr, int n, int i)
{
    // base case
    if (i == n - 1)
    {
        return true;
    }

    // recursive case
    if (arr[i] < arr[i + 1] && arraySorted(arr, n, i + 1))
    {
        return true;
    }
    return false;
}

int main()
{
    int arr[100];
    int n; // 5
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // 4,6,9,68,80
    }
    // if (arraySorted(arr, n))
    // {
    //     cout << "Array is sorted" << endl;
    // }
    // else
    // {
    //     cout << "Array is not sorted" << endl;
    // }
    if (arraySorted(arr, n, 0))
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}