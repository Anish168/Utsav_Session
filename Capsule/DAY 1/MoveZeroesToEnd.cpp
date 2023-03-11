#include <iostream>
using namespace std;

// Brute force
// T.C:- O(n) S.C:- O(n)
void zerosToEnd(int arr[], int n)
{

    int temp[n];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp[k] = arr[i];
            k++;
        }
    }

    while (k < n)
    {
        temp[k] = 0;
        k++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
}

// optimzed
// T.C:- O(n) S.C:- O(1)
void zerosToEnd(int arr[], int n)
{

    // finding first zero occurrence
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    // finding zeros and immediate non-zero elements and swapping them
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
