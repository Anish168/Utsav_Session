#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Brute force
//  T.C:- O(nlogn) + O(n) S.C:- O(1)
//  int secondLargest(vector<int>&arr,int n)
//  {
//      sort(arr.begin(), arr.end());
//      int largest = arr[n-1];
//      int second = -1;
//      for (int i = n-2; i >= 0; i--)
//      {
//          if (arr[i] != largest)
//          {
//              second = arr[i];
//              break;
//          }
//      }
//      return second;
//  }

// Better
//  T.C:- O(n) + O(n) --> O(2n) S.C:- O(1)

// int largest(vector<int> &arr, int n)
// {
//     int maximum = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] > maximum)
//         {
//             maximum = arr[i];
//         }
//     }
//     return maximum;
// }

// int secondLargest(vector<int> &arr, int n)
// {
//     int slargest = -1;
//     int large = largest(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > slargest && arr[i] != large)
//         {
//             slargest = arr[i];
//         }
//     }
//     return slargest;
// }

//Optimized
//  T.C:- O(n) S.C:- O(1)

int secondLargest(vector<int> &arr, int n)
{
    int slargest = -1;
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}