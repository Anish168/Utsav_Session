#include <iostream>
using namespace std;

// Brute
//  T.C:- O(N2) S.C:- O(1)
int missing(int arr[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            return i;
        }
    }
}

// Better approach:- hashing
//   T.C:- O(N) + O(N) S.C:- O(n)
int missing(int arr[], int n)
{
    int hash[n + 1] = {0};
    for (int i = 0; i <= n - 1; i++)
    {
        hash[arr[i]] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (hash[i] == 0)
        {
            return i;
        }
    }
}

// Optimized:- sum of n natural number
//    T.C:- O(N)  S.C:- O(1)

int missing(int arr[], int n)
{
    int sum = n * (n + 1) / 2;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum2 += arr[i];
    }
    return sum - sum2;
}
