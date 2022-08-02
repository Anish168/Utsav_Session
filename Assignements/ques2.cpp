#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] > arr[j])
    //         {
    //             swap(arr[i], arr[j]);
    //         }
    //     }
    // }

    //counting sort
    // int count0 = 0;
    // int count1 = 0;
    // int count2 = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         count0++;
    //     }
    //     else if (arr[i] == 1)
    //     {
    //         count1++;
    //     }
    //     else
    //     {
    //         count2++;
    //     }
    // }
    // for (int j = 0; j < count0; j++)
    // {
    //     arr[j] = 0;
    // }
    // for (int j = count0; j < count0 + count1; j++)
    // {
    //     arr[j] = 1;
    // }
    // for (int j = count0+ count1; j < count0 + count1 + count2; j++)
    // {
    //     arr[j] = 2;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    //dutch flag
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    return 0;
}