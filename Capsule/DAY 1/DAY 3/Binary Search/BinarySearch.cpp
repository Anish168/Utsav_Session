#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    //ITERATIVE APPROACH
    // loop
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    //loop k bhr aaya h ishka mtlb element nhi mila
    return -1;
}
int main()
{
    int arr[] = {5, 10, 15, 20, 25};
    int n = sizeof(arr) / sizeof(int);
    int key; // kya dhoondh rhe h
    cin >> key;
    cout<<"Element present at index "<<binarySearch(arr, n, key)<<endl;
    return 0;
}