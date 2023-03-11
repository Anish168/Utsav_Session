#include <iostream>
using namespace std;

// OPTIMIZED force
// T.C:- O(N) S.C:- O(1)
int maximumConsecutive(int arr[], int n)
{
    int maxi = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
        }
        if (cnt > maxi)
        {
            maxi = cnt;
        }
    }
    return maxi;
}