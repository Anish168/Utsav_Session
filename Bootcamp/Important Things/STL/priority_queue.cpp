#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> max;                             // max heap
    priority_queue<int, vector<int>, greater<int>> mini; // min heap
    max.push(2);
    max.push(1);
    max.push(6);
    max.push(4);

    int n = max.size();
    for (int i = 0; i < n; i++)
    {
        cout << max.top() << " ";
        max.pop();
    }
}