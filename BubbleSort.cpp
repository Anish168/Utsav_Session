#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 4, 3, 2, 1, 34, 21, 56, 78, 54, 33, 12};
    int n = sizeof(arr) / sizeof(int);
    // int n = 5;
    cout << "The total elements present in array " << n << endl;
    cout << "Before Bubble Sort " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Brute force
    //  for (int i = 0; i <= n - 2; i++) // i=0 first element
    //  {
    //      for (int j = 0; j <= n - 2 - i; j++) // j=0 to j=3 ; 5-2-0-->3
    //      {
    //          if (arr[j] > arr[j + 1])
    //          {
    //              // swap
    //              // Swap using 3rd variable
    //              // a-->arr[j], b-->arr[j+1]
    //              // int temp = arr[j];
    //              // arr[j] = arr[j + 1];
    //              // arr[j + 1] = temp;

    //             // swap w/o using 3rd varible
    //             // arr[j] = arr[j] + arr[j + 1];
    //             // arr[j + 1] = arr[j] - arr[j + 1];
    //             // arr[j] = arr[j] - arr[j + 1];

    //             // swap in one line
    //             // arr[j + 1] = arr[j] + arr[j + 1] - (arr[j] = arr[j + 1]);

    //             // swap inbuild swap
    //             swap(arr[j], arr[j + 1]);
    //         }
    //     }
    // }

    // optimized code

    for (int i = 0; i <= n - 2; i++) // i=0 first element
    {
        int flag = 0;
        for (int j = 0; j <= n - 2 - i; j++) // j=0 to j=3 ; 5-2-0-->3
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }

    cout << "After Bubble Sort " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}