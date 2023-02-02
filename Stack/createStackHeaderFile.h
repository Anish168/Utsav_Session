#include <iostream>
#include <vector>
using namespace std;
template <typename T>
class stack
{
    vector<T> v;

public:
    // push
    void push(T data)
    {
        v.push_back(data);
    }

    // pop
    void pop()
    {
        v.pop_back();
    }

    // top
    T top()
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
