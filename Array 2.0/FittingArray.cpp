#include <iostream>
#include <algorithm>
using namespace std;
bool fitting(int arr[], int brr[], int n)
{
    sort(arr, arr + n);
    sort(brr, brr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > brr[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[] = {1,2,4};
    int brr[] = {1,2,3};
    int n = 4;
    if (fitting(arr, brr, n))
    {
        cout << "Fitted" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}