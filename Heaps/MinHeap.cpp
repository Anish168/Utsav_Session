#include <iostream>
#include <vector>
using namespace std;
class minheap
{
public:
    vector<int> v;
    minheap()
    {
        v.push_back(-1);
    }

    // push
    void push(int d)
    {
        v.push_back(d);
        int c = v.size() - 1;
        int p = c / 2;
        while (c > 1 && v[c] < v[p])
        {
            swap(v[c], v[p]);
            c = p;
            p = c / 2;
        }
    }

    void heapify(int index)
    {
        int p = index;
        int minimumindex = index;
        int lc = 2 * p;
        int rc = 2 * lc + 1;

        if (lc < v.size() && v[minimumindex] > v[lc])
        {
            minimumindex = lc;
        }
        if (rc < v.size() && v[minimumindex] > v[rc])
        {
            minimumindex = rc;
        }

        if (minimumindex != p)
        {
            swap(v[minimumindex], v[p]);
            heapify(minimumindex);
        }
    }
    // pop
    void pop()
    {
        swap(v[1], v[v.size() - 1]);
        v.pop_back();
        heapify(1); // 1 issliye cuz parent swap hone k baad 1 index pr gya h.
    }

    // top
    int top()
    {
        return v[1];
    }
    // empty
    bool empty()
    {
        return v.size() == 1;
    }
};
int main()
{
    minheap minh;
    minh.push(1);
    minh.push(3);
    minh.push(10);
    minh.push(13);
    minh.push(6);
    minh.push(30);
    minh.push(0);
    minh.push(7);

    while (!minh.empty())
    {
        cout << minh.top() << " ";
        minh.pop();
    }

    return 0;
}