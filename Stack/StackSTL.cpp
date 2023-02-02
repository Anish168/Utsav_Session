#include<iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);

    s.pop();
    s.top();
    return 0;
}