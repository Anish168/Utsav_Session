#include <iostream>
using namespace std;
//Brute force
// T.C:- O(k) + O(n-k) + O(k) S.C:- O(k)
// void Rotatetoleft(int arr[], int n, int k)
// {
//     if (n == 0)
//         return;
//     k = k % n;
//     if (k > n)
//         return;
//     int temp[k];
//     for (int i = 0; i < k; i++)
//     {
//         temp[i] = arr[i];
//     }
//     for (int i = 0; i < n - k; i++)
//     {
//         arr[i] = arr[i + k];
//     }
//     for (int i = n - k; i < n; i++)
//     {
//         arr[i] = temp[i - n + k];
//     }
// }

//optimzed
//Using Reversal Algorithm
// T.C:- O(n) S.C:- O(1)
void Reverse(int arr[], int start, int end)
{
  while (start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
// Function to Rotate k elements to right
void Rotateeletoright(int arr[], int n, int k)
{
  // Reverse first n-k elements
  Reverse(arr, 0, n - k - 1);
  // Reverse last k elements
  Reverse(arr, n - k, n - 1);
  // Reverse whole array
  Reverse(arr, 0, n - 1);
}
