#include <iostream>
using namespace std;
int main()
{
    int arr1[100];
    int arr2[100];
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin >> arr2[j];
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr2[j] << " ";
                arr2[j] == -999;

                break;
            }
        }
    }

    // int i = 0;
    // while (i < m)//4
    // {
    //     int j = 0;
    //     while (j < n)   //5 1<5
    //     {
    //         if (arr1[i] == arr2[j])
    //         {
    //             cout << arr2[j] << " ";
    //             arr2[j] = -999;
    //             break;
    //         }
    //         j++;
    //     }
    //     i++;
    // }

    return 0;
}
