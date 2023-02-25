// Implement Stack Using 2 Queues
#include <iostream>
#include <queue>
using namespace std;

class Stack
{
    queue<int> q1;
    queue<int> q2;

public:
    // push
    void push(int data)
    {
        if (q1.empty() && q2.empty())
        {
            q1.push(data);
        }
        else if (!q1.empty() && q2.empty())
        {
            q1.push(data);
        }
        else if (!q2.empty() && q1.empty())
        {
            q2.push(data);
        }
    }
    // pop
    void pop()
    {
        if (!q1.empty() && q2.empty())
        {
            while (q1.size() > 1)
            {
                q2.push(q1.front());
                q1.pop();
            }
            // cout << q1.front() << endl;
            q1.pop(); // last element jo bcha h q1 m wo del hoga ab kyuki stack LIFO follow krta h
        }
        else if (!q2.empty() && q1.empty())
        {
            while (q2.size() > 1)
            {
                q1.push(q2.front());
                q2.pop();
            }
            // cout << q2.front() << endl;
            q2.pop(); // last element jo bcha h q2 m wo del hoga ab kyuki stack LIFO follow krta h
        }
        else
        {
            cout << "UNDERFLOW" << endl;
        }
    }

    // top
    int top()
    {
        if (!q1.empty() && q2.empty())
        {
            while (q1.size() > 1)
            {
                q2.push(q1.front());
                q1.pop();
            }
            // cout << q1.front() << endl;
            int ans = q1.front();
            q2.push(q1.front()); // sirf top hi toh print krna h pop thodi na krna isslie wps top ko bhej diya
            q1.pop();            // ab q1 se delete kr dete h, q1 khali krna h ab
            return ans;
        }

        else if (!q2.empty() && q1.empty())
        {
            while (q2.size() > 1)
            {
                q1.push(q2.front());
                q2.pop();
            }
            // cout << q2.front() << endl;
            int ans = q2.front();
            q1.push(q2.front());
            q2.pop(); // ab q2 se delete kr dete h, q2 khali krna h ab
            return ans;
        }
        else
        {
            cout << "Queue is Empty" << endl;
        }
    }

    // empty
    bool empty()
    {
        if (q1.empty() && q2.empty())
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Stack s;
    s.push(6);
    s.push(8);
    s.push(3);
    s.push(9);
    s.pop();    // 6 8 3
    s.push(19); // 6 8 3 19
    s.pop();    // 6 8 3
    s.pop();    // 6 8
    s.pop();    // 6
    s.push(69); // 6 69
    s.push(76); // 6 69 76
    s.push(36); // 6 69 76 36
    s.push(67); // 6 69 76 36 67
    s.top();    // 6 69 76 36 67 ---> 67 is the top
    s.pop();    // 6 69 76 36
    s.pop();    // 6 69 76
    s.pop();    // 6 69
    s.pop();    // 6

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}