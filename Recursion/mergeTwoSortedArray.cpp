#include <iostream>
using namespace std;
void mergetwoSortedarray(int *arr1, int *arr2, int m, int n)
{
    int temp[100];
    int i = 0, j = 0, k = 0;

    // loop
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            temp[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr2[j];
            k++;
            j++;
        }
    }

    // ish loop se bhr aaya mtlb arr1 k elements bche hue h
    while (i < m)
    {
        temp[k] = arr1[i];
        i++;
        k++;
    }
    // ish loop se bhr aaya mtlb arr2 k elements bche hue h
    while (j < n)
    {
        temp[k] = arr2[j];
        k++;
        j++;
    }
    for (int l = 0; l < k; l++)
    {
        cout << temp[l] << " ";
    }
}
int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6};
    int m = 4;
    int n = 3;
    mergetwoSortedarray(arr1, arr2, m, n);
    return 0;
}