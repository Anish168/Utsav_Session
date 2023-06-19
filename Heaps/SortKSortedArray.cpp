#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> v;
vector<int> kSorted(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> minh;
    for (int i = 0; i < n; i++)
    {
        minh.push(arr[i]);
        if (minh.size() > k)
        {
            v.push_back(minh.top());
            minh.pop();
        }
    }
    while (minh.size() > 0)
    {
        v.push_back(minh.top());
        minh.pop();
    }
    return v;
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
    kSorted(arr, n, k);
    int i = 0;
    while (v.size() > 0)
    {
        cout << v[i] << " ";
        i++;
        v.pop_back();
    }

    return 0;
}