#include <iostream>
#include <climits>
using namespace std;
template <typename T>
class queue
{
    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

public:
    queue(int totalSize)
    {
        data = new T[totalSize];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
        capacity = totalSize;
    }

    // Empty:-
    bool isEmpty()
    {
        return size == 0;
    }

    // size
    int getSize()
    {
        return size;
    }

    // Front
    int front()
    {
        if (firstIndex == -1)
        {
            cout << "Queue is empty" << endl;
            return INT_MIN;
        }
        else
        {
            return data[firstIndex];
        }
    }
    // ENQUEUE :- Inserting an element
    void enqueue(int element)
    {
        if (size == capacity)
        {
            cout << "Queue is full..!!" << endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex + 1) % capacity;
        size++;
        if (firstIndex == -1)
        {
            firstIndex = 0;
        }
    }

    // DEQUEUE:- Deleting an element
    T dequeue()
    {
        if (isEmpty())
        {
            cout << "UNDERFLOW " << endl;
            return 0;
        }
        T ans = data[firstIndex];
        firstIndex = (firstIndex + 1) % capacity;
        size--;
        if (size == 0)
        {
            firstIndex = -1;
            nextIndex = 0;
        }
        return ans;
    }
};
int main()
{
    queue<int> q(5);
    // cout << "The front element is:- " << q.front() << endl;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    cout<<"The size is:- "<<q.getSize()<<endl;
    q.enqueue(50);
    q.enqueue(60);

    cout << "The front element is:- " << q.front() << endl;
    // cout << "The front element is:- " << q.front() << endl;
    cout<<"The dequeued eleemnt is:- "<<q.dequeue()<<endl;
    cout<<"The dequeued eleemnt is:- "<<q.dequeue()<<endl;
    cout<<"The size is:- "<<q.getSize()<<endl;
    cout<<"The dequeued eleemnt is:- "<<q.dequeue()<<endl;
    cout << "The front element is:- " << q.front() << endl;
    q.enqueue(50);
    q.enqueue(60);

    cout << "The front element is:- " << q.front() << endl;
    cout<<"The size is:- "<<q.getSize()<<endl;
    cout<<"Is Empty:- "<<q.isEmpty()<<endl;

    return 0;
}