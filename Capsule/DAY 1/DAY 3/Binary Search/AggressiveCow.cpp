#include <iostream>
#include <algorithm>
using namespace std;

bool isvalid(int arr[], int n, int k, int mid)
{
    int cow = 1;
    int firstposition = arr[0];
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] - firstposition >= mid)
        {
            cow++;
            if (cow == k)
            {
                return true;
            }
            firstposition = arr[i];
        }
    }
    return false;
}
int aggressiveCow(int arr[], int n, int k)
{
    int start = 0;
    int end = arr[n - 1];
    int ans = -1;
    while (start < end)
    {
        int mid = (start + end) / 2;

        if (isvalid(arr, n, k, mid))
        {
            // agar place kr paye
            ans = mid;
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
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int k;
    cin >> k; // cow kitni h
    cout << "The maximum distance is " << aggressiveCow(arr, n, k) << endl;
    return 0;
}