#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    // vector<int> a(5, 1);
    // vector<int>last(a); //copying eleement of a
    cout << "Capacity-> " << v.capacity() << endl;
    v.push_back(1);
    cout << "Capacity-> " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity-> " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity-> " << v.capacity() << endl;
    cout << "Size-> " << v.size() << endl;

    cout << "Element at 2nd index " << v.at(2) << endl;
    cout << "Front " << v.front() << endl;
    cout << "Back " << v.back() << endl;

    for (int i : v)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.pop_back();

    for (int i : v)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Before clear size " << v.size() << endl; // size 0 hoti h capacity 0 nhi hoti
    v.clear();
    cout << "After clear size " << v.size() << endl; // size 0 hoti h capacity 0 nhi hoti

    cout << "Capacity-> " << v.capacity() << endl;
}