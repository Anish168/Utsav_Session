#include <iostream>
#include <set>
using namespace std;
//insert erase find count --> O(logn) rest are O(1)
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(6);
    s.insert(3);
    s.insert(2);
    s.insert(2);
    s.insert(4);
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    s.erase(s.begin());
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << s.count(5) << endl; // is element present or not
    // find agar element mil jata h or ushka iterator return krna h
    set<int>::iterator itr = s.find(5);
    cout << "value present at itr-> " << *it << endl;
    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}