// Implementation using Hashmaps
#include <iostream>
#include <list>
#include <unordered_map>
#include <queue>
using namespace std;
template <typename T>
class graph
{
    unordered_map<T, list<T>> h;

public:
    // constructor
    void addedge(T u, T v, bool bidirectional = false)
    {
        h[u].push_back(v);
        if (bidirectional)
        {
            h[v].push_back(u);
        }
    }

    // printing hashmap
    void print()
    {
        for (auto p : h) // yeh hashmap(h) ka ek ek kr k p m daal rha hoga
        {
            cout << p.first << " : ";
            for (auto n : p.second) // p.second m poora list hoga or n ek ek kr k second ki value ko print krega
            {
                cout << n << "-->";
            }
            cout << endl;
        }
    }

    // Braedth First Search
    void BFS(T start)
    {
        queue<T> q;
        unordered_map<T, bool> visited;
        q.push(start);
        visited[start] = true;
        while (!q.empty())
        {
            T node = q.front();
            q.pop();
            cout << node << " ";

            for (auto children : h[node])
            {
                if (!visited[children])
                {
                    q.push(children);
                    visited[children] = true;
                }
            }
        }
        cout << endl;
    }
};
int main()
{
    // graph g;
    graph<int> g;
    g.addedge(0, 1);
    g.addedge(0, 4);
    g.addedge(4, 1);
    g.addedge(4, 3);
    g.addedge(1, 3);
    g.addedge(1, 2);
    g.addedge(2, 3);
    g.BFS(0); // passing starting point

    g.print();
    return 0;
}