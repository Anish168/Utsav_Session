#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(int);
    cout << "Before Sorting ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //Little Brute approach

    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = 0; j <= n - 2 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    //Optimized code

    for (int i = 0; i <= n - 2; i++)
    {
        int flag = 0;
        for (int j = 0; j <= n - 2 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = 1; //ishka mtlb sort ho hi rhi h
            }
        }

        if (flag == 0) //ishka mtlb array sorted h
        {
            break;
        }
    }

    cout << "After Sorting:- ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}