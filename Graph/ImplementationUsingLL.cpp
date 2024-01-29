#include <iostream>
#include <list>
using namespace std;
class graph
{
public:
    int tv;
    list<int> *l;
    graph(int vertices)
    {
        tv = vertices;
        l = new list<int>[vertices];
    }

    void addEdge(int u, int v, bool biDirectional = true)
    {
        l[u].push_back(v);
        if (biDirectional)
        {
            l[v].push_back(u);
        }
    }

    void print()
    {
        for (int i = 0; i < tv; i++)
        {
            cout << i << " : ";
            for (auto ne : l[i])
            {
                cout << ne << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    graph g(5);
    g.addEdge(0, 1);
    g.addEdge(1, 3);
    g.addEdge(1, 2);
    g.addEdge(1,4);
    g.addEdge(0,4);
    g.addEdge(3,4);

    g.print();
    return 0;
}