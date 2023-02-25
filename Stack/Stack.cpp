// Implementing stack using Vector
#include <iostream>
#include <vector>
using namespace std;
class stack
{
    vector<int> v; // ishe humne private issliye bnaya cuz hum vector ko stack ki trh use krna chahte h
    // agar public m dal denge toh koi bhi elemnet access kr skte h but in stack hum top element hi access krte h

public:
    // vector<int> v;
    // top
    int top()
    {
        return v[v.size() - 1];
    }

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

    // size
    int size()
    {
        return v.size();
    }

    // is_empty
    bool empty()
    {
        if (v.size() == 0)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    stack s;
    s.push(33);
    s.push(34);
    s.push(35);
    s.push(36);

    // cout<<s.v[1]<<endl;     //hum beech se stack ko access nhi kr skte issliye vector private m bnega

    cout << s.top() << endl;
    cout << s.size() << endl;

    s.pop();
    s.pop();
    cout << s.top() << endl;
    cout << s.size() << endl;

    if (s.empty())
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    s.pop();
    s.pop();
    if (s.empty())
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}
