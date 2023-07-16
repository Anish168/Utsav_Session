#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector <datatype> variablename;
    vector<int> v;
    v.push_back(9);
    v.push_back(91);
    v.push_back(95);
    cout << "Size of vector " << v.size() << endl;
    cout << "Capacity of vector " << v.capacity() << endl;
    cout << "Maximum size of vector " << v.max_size() << endl;

    v.insert(v.begin() + 3, 80);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    cout<<v.back()<<" ";
    cout<<endl;
    cout<<v.front()<<" ";

    return 0;
}