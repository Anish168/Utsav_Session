#include <climits>

class Solution
{
    // Function to find the leaders in the array.
public:
    vector<int> leaders(int arr[], int n)
    {
        // Code here
        vector<int> v;
        // for(int i=0; i<n; i++)
        // {
        //         int flag=0;
        //     for(int j=i+1; j<n; j++)
        //     {
        //         if(arr[i]<arr[j])
        //         {
        //             flag=1;
        //             break;
        //         }
        //     }
        //     if(flag==0)
        //     {
        //         v.push_back(arr[i]);
        //     }

        // }
        int max = INT_MIN;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] >= max)
            {
                v.push_back(arr[i]);
                max = arr[i];
            }
        }
        reverse(v.begin(), v.end());
        return v;
    }
};