#include <iostream>
#include <unordered_map>
// #include <map>

using namespace std;
int main()
{
    // unordered_map<string, int> umap;
    unordered_map<int, int>umap;
    // map<string,int>umap;
    // 1st way to intilize the map
    //  umap.insert("kiwi",200);

    // // 2nd way
    // umap["kiwi"] = 200;
    // umap["apple"] = 200;
    // umap["banana"] = 100;

    // // 3rd way
    // umap.insert(make_pair("grapes", 290));

    // // 4th way
    // pair<string, int> p("Papaya", 500);

    // // for (auto x : umap)
    // // {
    // //     cout << x.first << " " << x.second << endl;
    // // }

    // for (auto itr = umap.begin(); itr != umap.end(); itr++)
    // {
    //     cout << itr->first << " " << itr->second << endl;
    // }

    // // if (umap.find("kiwi") == umap.end())
    // // {
    // //     cout << "Fruit is not present." << endl;
    // // }
    // // else
    // // {
    // //     cout << "fRUITY IS PRESENT." << endl;
    // // }

    // if (umap.find("apple") != umap.end())
    // {
    //     cout << "fRUITY IS PRESENT." << endl;
    // }
    // else
    // {
    //     cout << "Fruit is not present." << endl;
    // }

    // cout << umap.size() << endl;

    int arr[] = {2, 3, 4, 3, 2, 3, 4, 5, 4, 32, 2, 3, 2};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        umap[arr[i]]++;
    }

    for (auto x : umap)
    {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}