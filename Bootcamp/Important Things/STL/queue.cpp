#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string>q;
    q.push("Anish");
    q.push("Kumar");
    q.push("Jha");
    cout << "Top Element " << q.front() << endl;
    q.pop();
    cout << "Top Element " << q.front() << endl;
    cout << "Size " << q.size() << endl;

}