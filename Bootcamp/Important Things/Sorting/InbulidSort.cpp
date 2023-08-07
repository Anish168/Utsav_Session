#include <iostream>
#include <algorithm> //for using inbuild sort

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

    //syntax:- sort(arrayname, arrayname + size)
    sort(arr, arr + n);

    cout << "After Sorting:- ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}