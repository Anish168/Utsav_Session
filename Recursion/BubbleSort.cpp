#include <iostream>
using namespace std;
// for (int i = 0; i <= n - 2; i++) // i=0 first element   i==4
// {
//     for (int j = 0; j <= n - 2 - i; j++) // j=0 to j=3 ; 5-2-0-->3 j==4
//     {

//         if (arr[j] > arr[j + 1])
//         {
//             swap(arr[j], arr[j + 1]);
//             flag = 1;
//         }
//     }
// }

// void bubbleSortUsingRec(int *arr, int n, int i)
// {
//     // base case
//     if (i == n - 1)
//     {
//         return;
//     }

//     // recursive case
//     for (int j = 0; j <= n - 2 - i; j++) // j=0 to j=3 ; 5-2-0-->3
//     {

//         if (arr[j] > arr[j + 1])
//         {
//             swap(arr[j], arr[j + 1]);
//         }
//     }
//     bubbleSortUsingRec(arr, n, i + 1);
// }

void bubbleSortPureRec(int arr[], int n, int i, int j)
{
    // base case
    if (i == n - 1)
    {
        return;
    }
    if (j == n - 1 - i)
    {
        bubbleSortPureRec(arr, n, i + 1, 0);
    }
    else
    {
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
        }
        bubbleSortPureRec(arr, n, i, j + 1);
    }
}

int main()
{
    int arr[] = {5, 7, 6, 4, 3};
    int n = sizeof(arr) / sizeof(int);
    // bubbleSortUsingRec(arr, n, 0);
    bubbleSortPureRec(arr, n, 0, 0);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}