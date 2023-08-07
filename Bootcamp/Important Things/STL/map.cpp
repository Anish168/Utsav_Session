#include <iostream>
#include <map>
using namespace std;
// insert erase find count in case of ordered_map --> O(logn) rest are O(1)
int main()
{
    map<int, string> mp; // ordered map is implemented by red black tree
    mp[1] = "Anish";
    mp[2] = "Kumar";
    mp[3] = "Jha";
    // for (auto i : mp)
    // {
    //     cout << i.first << endl;
    // }

    mp.insert({4, "Utsav"});
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "Finding 2-> " << mp.count(2) << endl;
    cout << "after erase" << endl;
    mp.erase(2);
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout<<"Find "<<endl;
    auto it = mp.find(3);
    for (auto i = it; i != mp.end(); i++)
    {
        cout << (*i).first << endl;
    }
}