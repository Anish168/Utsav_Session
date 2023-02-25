#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    // constructor
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class queue
{
    node *head;
    node *tail;
    int length;

public:
    queue()
    {
        head = NULL;
        tail = NULL;
        length = 0;
    }

    // push
    void push(int data)
    {
        // insert at tail
        node *n = new node(data);
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
        length++;
    }
    // pop
    void pop()
    {
        // delete at front

        // empty
        if (head == NULL)
        {
            return;
        }

        // single node
        else if (head->next == NULL)
        {
            delete head;
            head = NULL;
            tail = NULL;
        }

        else
        {
            node *temp = head;
            head = head->next;
            delete temp;
            temp = NULL;
        }
        length--;
    }
    // front
    int front()
    {
        return head->data;
    }

    // size
    int size()
    {
        return length;
    }

    // empty
    bool empty()
    {
        if (head == NULL)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.push(5);
    q.push(1);
    q.push(6);
    q.push(2);
    q.push(9);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.push(10);
    q.push(12);

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}