#include <iostream>
#include <stack>
using namespace std;
void insertatbottom(stack<int> &s, int te)
{
    // base case
    if (s.empty())
    {
        s.push(te);
        return;
    }

    // recursive case
    int top = s.top();
    s.pop();
    insertatbottom(s, te);
    s.push(top);
}

void reverse(stack<int> &s)
{
    // base acse
    if (s.empty())
    {
        return;
    }

    // recursive case
    int topElement = s.top();
    s.pop();
    reverse(s);
    insertatbottom(s, topElement);
}
int main()
{
    stack<int> s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    reverse(s);
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
}