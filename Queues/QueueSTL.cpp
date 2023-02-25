#include <iostream>
#include <queue>
using namespace std;
void printqueue(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
}
int main()
{
    queue<int> q;
    q.push(5);
    q.push(1);
    q.push(6);
    q.push(2);
    q.push(9);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.push(10);
    q.push(12);

    cout << "Size of Queue " << q.size() << endl;
    cout << "Back of Queue " << q.back() << endl;
    cout << endl;
    printqueue(q);
    return 0;
}