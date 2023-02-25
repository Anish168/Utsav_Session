// f:- front , e:- end , cs:- current size , ts:- total size , n:- size of arr
#include <iostream>
using namespace std;
class queue
{
    int *arr;
    int f;
    int e;
    int cs;
    int n;

public:
    queue(int s = 5)
    {
        n = s;
        arr = new int[n];
        f = 0;
        e = n - 1;
        cs = 0;
    }

    // push
    void push(int data)
    {
        if (cs < n) // current size m jb tk hi value dal skte h jb tk wo n se chota h
        {
            e = (e + 1) % n; // 5%5=0     (0+1)%5=1   (1+1)%5=2    (2+1)%5=3   (3+1)%5=4
            arr[e] = data;   // 4     1     6     5     15
            cs++;            // 0     1     2     3     4
        }
        else
        {
            cout << "Overflow" << endl;
        }
    }

    // pop
    void pop()
    {
        if (cs > 0)
        {
            f = (f + 1) % n; // front aage bdh gya ab jo last front tha wo act krega like a garbage
            cs--;
        }
        else
        {
            cout << "Underflow" << endl;
        }
    }

    // empty
    bool empty()
    {
        if (cs == 0)
        {
            return true;
        }
        return false;
    }

    // front
    int front()
    {
        return arr[f];
    }

    // size
    int size()
    {
        return cs;
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
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}