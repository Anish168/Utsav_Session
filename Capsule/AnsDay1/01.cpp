// User function template for C++
class Solution
{
public:
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        // vector<int>ans;
        // priority_queue<int, vector<int>, greater<int>>pq;
        // for(int i = 0; i < n; i++)
        // {
        //     pq.push(arr[i]);
        //     if(pq.size() > k)
        //     {
        //         pq.pop();
        //     }
        // }

        // while(!pq.empty())
        // {
        //     ans.push_back(pq.top());
        //     pq.pop();
        // }
        // reverse(ans.begin(), ans.end());
        // return ans;

        // priority_queue<int
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++)
        {
            pq.push(arr[i]);
            if (pq.size() > k)
            {
                pq.pop();
            }
        }
        vector<int> u;
        while (!pq.empty())
        {
            u.push_back(pq.top());
            pq.pop();
        }
        reverse(u.begin(), u.end());
        return u;
    }
};