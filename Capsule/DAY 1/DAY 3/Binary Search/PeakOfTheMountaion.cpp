#include <iostream>
using namespace std;
// int peakelement(int arr[], int n)
// {
//     int start = 0;
//     int end = n - 1;
//     while (start <= end)
//     {
//         int mid = (start + end) / 2;
//         // Firstly we exclude the edges case
//         if (mid > 0 && mid < n - 1) // mtlb ab humhe corner k element nhi lene filhal
//         {
//             // ishke andr aaya mtlb mid hmari koi beech ki element hogi
//             if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) // condition of peak point
//             {
//                 return mid;
//             }

//             // agar hmara mid element peak nhi hua then
//             else if (arr[mid] < arr[mid + 1])
//             {
//                 start = mid + 1;
//             }
//             else
//             {
//                 end = mid - 1;
//             }
//         }

//         // Consider left edge
//         else if (mid == 0)
//         {
//             if (arr[mid] > arr[mid + 1])
//             {
//                 return 0;
//             }
//         }
//         // Consider Right edge
//         else if (mid == n - 1)
//         {
//             if (arr[mid] > arr[mid - 2])
//             {
//                 return mid;
//             }
//         }
//     }
// }

int peakelement(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = start;
        }
    }
    return start;
}
int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The Peak element is " << peakelement(arr, n) << endl;

    return 0;
}