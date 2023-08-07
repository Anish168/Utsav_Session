#include <iostream>
#include <list> //use doubly linked list stl
using namespace std;

int main()
{
    list<int> l;
    // list<int>n(5,100);
    l.push_back(1);
    l.push_front(2);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin()); // 1 1 element delete krta rhega
    cout << "after erase" << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout<<"Size of list "<<l.size()<<endl;
    // l.pop_back();
    // l.pop_front();
    
}