#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("Anish");
    s.push("Kumar");
    s.push("Jha");
    cout << "Top Element " << s.top() << endl;
    s.pop();
    cout << "Top Element " << s.top() << endl;
    cout << "Size " << s.size() << endl;
    cout << "Empty or not " << s.empty() << endl;

}