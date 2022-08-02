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

    int target;
    cin >> target;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "The element present on index " << i << " " << j << endl;
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        cout << "No element present that can make sum of the given target " << endl;
    }

    return 0;
}