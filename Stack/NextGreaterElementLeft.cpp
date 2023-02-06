#include <iostream>
#include<algorithm>
#include <vector>
#include <stack>
using namespace std;
void nextGreatestLeft(int *arr, int n, vector<int> &v)
{
    stack<int> s;
    v.push_back(-1);
    s.push(arr[0]);
    for (int i = 1; i < n; i++)
    {
        while (!s.empty() && s.top() <= arr[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            v.push_back(-1);
        }
        else
        {
            v.push_back(s.top());
        }

        s.push(arr[i]);
    }
}

int main()
{
    int arr[] = {1,3,2,4};
    int n = sizeof(arr) / sizeof(int);
    vector<int> v;
    nextGreatestLeft(arr, n, v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}