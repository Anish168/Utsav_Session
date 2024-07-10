class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &arr)
    {
        //         set<vector<int>> st;
        //         int n = arr.size();
        //         // check all possible triplets:
        //         for (int i = 0; i < n; i++) {
        //             for (int j = i + 1; j < n; j++) {
        //                 for (int k = j + 1; k < n; k++) {
        //                     if (arr[i] + arr[j] + arr[k] == 0) {
        //                         vector<int> temp = {arr[i], arr[j], arr[k]};
        //                         sort(temp.begin(), temp.end());
        //                         st.insert(temp);
        //                     }
        //                 }
        //             }
        //         }

        //         //store the set elements in the answer:
        //         vector<vector<int>> ans(st.begin(), st.end());
        //         return ans;
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++)
        {
            if (i != 0 && arr[i] == arr[i - 1])
                continue;

            int j = i + 1;
            int k = arr.size() - 1;
            while (j < k)
            {
                int sum = arr[i] + arr[j] + arr[k];
                if (sum > 0)
                    k--;
                else if (sum < 0)
                    j++;
                else
                {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while (j < k && arr[j] == arr[j - 1])
                        j++;
                    while (j < k && arr[k] == arr[k + 1])
                        k--;
                }
            }
        }
        return ans;
    }
};