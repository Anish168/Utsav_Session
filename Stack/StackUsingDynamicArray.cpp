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
    stackUsingArray()
    {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }

    // Insert
    void push(int element)
    {
        if (nextIndex == capacity)
        {
            int *newdata = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newdata[i] = data[i];
            }
            delete[] data;
            data = newdata;
            capacity = 2 * capacity;
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
    stackUsingArray s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(250);
    s.push(500);

    // cout << s.pop() << endl;
    // cout << s.top() << endl;
    // cout << s.pop() << endl;

    // if (s.isEmpty())
    // {
    //     cout << "empty" << endl;
    // }
    // else
    // {
    //     cout << "not empty" << endl;
    // }
    cout << s.size() << endl;
    return 0;
}