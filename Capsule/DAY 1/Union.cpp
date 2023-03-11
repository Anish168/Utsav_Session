#include <iostream>
#include <vector>
#include <set>
using namespace std;
// Brute force:-
//  T.C:- O(nlogn) + O(mlogm) + O(m +n) S.C:- O(m + n)
// vector<int> FindUnion(int arr1[], int arr2[], int n, int m)
// {
//     set<int> s;
//     vector<int> Union;
//     for (int i = 0; i < n; i++)
//         s.insert(arr1[i]);
//     for (int i = 0; i < m; i++)
//         s.insert(arr2[i]);
//     for (auto &it : s)
//         Union.push_back(it);
//     return Union;
// }

// optimized :- two pointer
//  T.C:- O(n + m) S.C:- O(n + m)
vector<int> FindUnion(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;  // pointers
    vector<int> Union; // Uninon vector
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j]) // Case 1 and 2
        {
            if (Union.size() == 0 || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }
        else // case 3
        {
            if (Union.size() == 0 || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }
    }
    while (i < n) // IF any element left in arr1
    {
        if (Union.back() != arr1[i])
            Union.push_back(arr1[i]);
        i++;
    }
    while (j < m) // If any elements left in arr2
    {
        if (Union.back() != arr2[j])
            Union.push_back(arr2[j]);
        j++;
    }
    return Union;
}
