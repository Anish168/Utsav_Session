#include <iostream>
using namespace std;
int majority(int arr[], int n)
{
    // 1st step
    int count = 1, index = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[index] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }

        if (count == 0)
        {
            count = 1;
            index = i;
        }
    }

    // 2nd step
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[index] == arr[i])
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        return arr[index];
    }
    else
    {
        return -1;
    }
}
int main()
{
    int arr[] = {3,1,3,3,2};
    int n = sizeof(arr) / sizeof(int);
    cout << "The majority element is: " << majority(arr, n) << endl;
    return 0;
}