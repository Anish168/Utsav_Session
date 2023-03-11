#include <iostream>
using namespace std;

// Optimized
//  T.C:- O(n) S.C:- O(1)
bool isSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            return false;
    }

    return true;
}