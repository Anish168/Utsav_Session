#include <iostream>
using namespace std;
int firstOccurence(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;  //khi hmara element phle occur toh nhi hua means left m toh element present nhi h first wala
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
    return ans;
}

int lastOccurence(int arr[],int n,int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            start=mid+1;    //khi hmara element last m toh occur nhi hua means right m toh element present nhi h last wala
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
    return ans;
}
int main()
{
    int arr[] = {0,1,1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;

    cout << "The first Occurence of element is " << firstOccurence(arr, n, key) << endl;
    cout << "The last Occurence of element is " << lastOccurence(arr, n, key) << endl;
    return 0;
}