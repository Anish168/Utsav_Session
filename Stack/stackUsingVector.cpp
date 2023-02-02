#include <iostream>
#include <vector>
using namespace std;

class stack
{
    vector<int> v;

public:
    // push
    void push(int data)
    {
        v.push_back(data);
    }

    // pop
    void pop()
    {
        v.pop_back();
    }

    // top
    int top()
    {
        return v[v.size() - 1];
    }

    // size
    int size()
    {
        return v.size();
    }

    // empty
    bool empty()
    {
        return v.size() == 0;
    }
};

int main()
{
    stack s;
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);

    // cout << s.top() << endl;
    // s.pop();
    // cout << s.top() << endl;

    return 0;
}