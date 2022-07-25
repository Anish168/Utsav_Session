#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {5, 4, 2, 1, 3}; // op 1 2 3 4 5
    int n = sizeof(arr) / sizeof(int);

    cout << "Before Inbuild Sort " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    // inbuild sort syntax: sort(arrayname, arrayname + size)
    sort(arr, arr + n);

    cout << "After Inbuild Sort " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}