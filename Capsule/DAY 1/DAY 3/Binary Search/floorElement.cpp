#include <iostream>
using namespace std;
int floor(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int res = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            res = arr[mid];
            start = mid + 1;
        }
    }
}
int main()
{
    int arr[] = {1,2,3,4,8,10,10,12,19};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    cout << "Floor element is: " << floor(arr, n, key) << endl;

    return 0;
}