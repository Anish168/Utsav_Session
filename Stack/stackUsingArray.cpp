#include <iostream>
#include <climits>
using namespace std;
class stackUsingArray
{
    int *data;
    int nextIndex;
    int capacity;

public:
    // constructor
    stackUsingArray(int totalSize)
    {
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }

    // Insert
    void push(int element)
    {
        if (nextIndex == capacity)
        {
            cout << "Overflow" << endl;
            return;
        }

        data[nextIndex] = element;
        nextIndex++;
    }

    // Deletion
    int pop()
    {
        if (nextIndex == 0)
        {
            cout << "Underflow" << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

    // Empty
    bool isEmpty()
    {
        // if(nextIndex == 0)
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }

        return nextIndex == 0;
    }
    // size
    int size()
    {
        return nextIndex;
    }

    // top
    int top()
    {
        return data[nextIndex - 1];
    }
};
int main()
{
    stackUsingArray s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << s.pop() << endl;
    cout << s.top() << endl;
    cout << s.pop() << endl;

    if (s.isEmpty())
    {
        cout << "empty" << endl;
    }
    else
    {
        cout << "not empty" << endl;
    }
    cout << s.size() << endl;
    return 0;
}