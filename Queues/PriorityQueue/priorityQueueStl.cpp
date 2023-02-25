#include <iostream>
#include <queue>
using namespace std;
void print(priority_queue<int> pq)
{
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}
int main()
{
    priority_queue<int> q;
    q.push(10);
    q.push(100);
    q.push(1);
    q.push(-10);
    q.push(-110);

    print(q);
    cout << "The size of priorty queue is:- " << q.size() << endl;
    cout << "Is priorty queue empty:- " << q.empty() << endl;
    return 0;
}