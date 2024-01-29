#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;

class graph
{
    unordered_map<string, list<string>> g;

public:
    void addEdge(string u, string v, bool biDirectional = false)
    {
        g[u].push_back(v);
        if (biDirectional)
        {
            g[v].push_back(u);
        }
    }

    void print()
    {
        for (auto p : g)
        {
            cout << p.first << " : ";
            for (auto n : p.second)
            {
                cout << n << " --> ";
            }
            cout << endl;
        }
    }
};
int main()
{
    graph h;
    h.addEdge("Putin", "Trump");
    h.addEdge("Putin", "Modi");
    h.addEdge("Putin", "Pope");
    h.addEdge("Prabhu", "Modi");
    h.addEdge("Modi", "Yogi", true);
    h.addEdge("Modi", "Trump", true);

    h.print();
    return 0;
}