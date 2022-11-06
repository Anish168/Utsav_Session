#include <iostream>
using namespace std;
int firstIndex(int *arr, int n, int i)
{
    // base case
    if (i==n-1)
    {
        return -1;
    }
    

    // recursive case
    if (arr[i] == 7)
    {
        return i;
    }
    return firstIndex(arr, n - 1, i + 1);
}

int main()
{
    int arr[] = {3, 6, 8, 3, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << "Index is: " << firstIndex(arr, n, 0);

    return 0;
}