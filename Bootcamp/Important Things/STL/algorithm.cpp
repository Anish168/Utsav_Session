#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    string ans = "anish";
    reverse(ans.begin(), ans.end());
    cout << ans << endl;

    vector<int> v;
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);
    v.push_back(3);

    cout << "Before rotate " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    rotate(v.begin(), v.begin() + 2, v.end());
    cout << "After rotate " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // sort(v.begin(),v.end());    //combination of quick sort + insertion sort + heap sort
    // sort(v.begin() + 2, v.end() + 4);
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }
    // sort in descending order
    // int arr[] = {4, 5, 1, 3};
    // int n = sizeof(arr) / sizeof(int);
    // int arr[] = {4, 2, 1};

    // sort(arr, arr + 3, greater<int>());

    // cout << arr[0] << " " << arr[1] << " " << arr[2];

    // Can we also sort the container in a custom order?
    // bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
    // {
    //     return (a.second < b.second);
    // }
    // vector<pair<int, int>> vec = {{10, 3}, {20, 1}, {30, 2}};

    // sort(vec.begin(), vec.end(), sortbysec);

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << vec[i].first << " " << vec[i].second << "\n";
    // }
    // int n = 7;

    // cout << __builtin_popcount(n); // return no. of set bits

    // long long num = 165786578687;
    // cout << __builtin_popcountll(n); // return no. of set bits
    // cout << endl;

    // string s = "123";
    // do
    // {
    //     cout << s << endl;
    // } while (next_permutation(s.begin(), s.end()));

    // vector<int> v{4, 2, 5, 9, 1};
    // cout << "The elements in the vector are: ";
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // cout << "The minimum element is: " << *min_element(v.begin(), v.end());

    // vector<int> v{4, 2, 5, 9, 1};
    // cout << "The elements in the vector are: ";
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    cout << "The maximum element is: " << *max_element(v.begin(), v.end());
    int sum = 1;
    int a[] = {5, 10, 15};

    // Simple default accumulate function
    // cout << "\nResult using accumulate: ";
    // cout << accumulate(a, a + 3, sum);

    int myfun(int x, int y)
    {
        // for this example we have taken product
        // of adjacent numbers
        return x * y;
    }
    // Using accumulate function with
    // defined function
    cout << "\nResult using accumulate with"
            "user-defined function: ";
    cout << accumulate(a, a + 3, sum, myfun);
    return 0;
}