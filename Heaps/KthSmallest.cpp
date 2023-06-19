#include <iostream>
#include <queue>
using namespace std;
int kthSmallest(int arr[], int n, int k)
{
    priority_queue<int> maxh;
    for (int i = 0; i < n; i++)
    {
        maxh.push(arr[i]);
        if (maxh.size() > k)
        {
            maxh.pop();
        }
    }
    return maxh.top();
}
int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;
    cout << "The " << k << "th smallest element is " << kthSmallest(arr, n, k);
    return 0;
}