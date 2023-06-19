#include <iostream>
#include <queue>
using namespace std;
void closetNumber(int arr[], int n, int k, int x)
{
    priority_queue<pair<int, int>> maxh;
    for (int i = 0; i < n; i++)
    {
        maxh.push({abs(arr[i] - x), arr[i]});
        if (maxh.size() > k)
        {
            maxh.pop();
        }
    }
    while (maxh.size() > 0)
    {
        cout << maxh.top().second << " ";
        maxh.pop();
    }
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
    int x;
    cin >> x;
    closetNumber(arr, n, k, x);

    return 0;
}