#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(5);

    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout<<(*it)<<endl;
    }
    cout<<s.size()<<endl;
    auto utsav = s.find(3);
    s.erase(utsav);
    cout<<s.size()<<endl;
    

    //function
    // find
    // insert
    // erase
    // size
    // count
    // begin
    // end
    return 0;
}