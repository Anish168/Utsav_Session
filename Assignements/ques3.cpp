#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // int start = 0;
    // int end = n - 1;
    // while (start <= end)
    // {
        // if (arr1[end] != 0 && arr1[start] == 0)
        // {
        //     swap(arr1[start], arr1[end]);
        //     end--;
        //     start++;
        // }
        // else if (arr1[end] == 0 && arr1[start] != 0)
        // {
        //     end--;
        //     swap(arr1[start], arr1[end]);
        //     start++;
        // }
        // else
        // {
        //     start++;
        //     end--;
        // }
        //     if (arr[start]==0 && arr[end]==0)
        //     {
        //         // start++;
        //         end--;
        //         swap(arr[start],arr[end]);
        //         start++;
        //         end--;
        //     }

        //     else if (arr[start]==0 && arr[end]!=0)
        //     {
        //         swap(arr[start],arr[end]);
        //         start++;
        //         end--;
        //     }
        //     else if(arr[start]!=0 && arr[end]!=0)
        //     {
        //         start++;
        //     }

        // }

        int i = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] != 0)
            {
                swap(arr[i], arr[j]);
                i++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

    
        return 0;
    }
