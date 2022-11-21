#include <iostream>
using namespace std;

void mergetwoSortedarray(int *arr, int start, int end)
{
    int mid = (start + end) / 2;
    int i = start;
    int j = mid + 1;
    int k = start;
    int temp[1000];
    while (i <= mid && j <= end)
    {
        if (arr[i] > arr[j])
        {
            temp[k] = arr[j];
            k++;
            j++;
        }
        else
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
    }

    while (i <= mid)
    {
        temp[k] = arr[i];
        k++;
        i++;
    }

    while (j <= end)
    {
        temp[k] = arr[j];
        k++;
        j++;
    }

    for (int l = start; l <= end; l++)
    {
        arr[l] = temp[l];
    }
}
void mergeSort(int *arr, int start, int end)
{
    //base case
    if (start == end)
    {
        return;
    }

    //recursive case
    //Divide
    int mid = (start + end) / 2;

    //sort
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    //merge two sorted array
    mergetwoSortedarray(arr, start, end);
}

int main()
{
    int arr[] = {3, 4, 2, 5, 1, 0, 7};
    int n = sizeof(arr) / sizeof(int);
    cout << "Before sorting" << endl;

    for (int l = 0; l < n; l++)
    {
        cout << arr[l] << " ";
    }
    cout << endl;

    mergeSort(arr, 0, n - 1);
    cout << "After sorting " << endl;

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}
