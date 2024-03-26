class Solution
{
public:
    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    typedef pair<int, int> P;
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        priority_queue<P, vector<P>, greater<P>> pq;
        pq.push({0, 0});
        vector<bool> isMST(V, false);
        int sum = 0;
        while (!pq.empty())
        {
            auto p = pq.top();
            pq.pop();

            int wt = p.first;
            int node = p.second;
            if (isMST[node] == true)
                continue;

            isMST[node] = true;
            sum += wt;
            for (auto &tmp : adj[node])
            {
                int neighbour = tmp[0];
                int neighbour_wt = tmp[1];

                if (isMST[neighbour] == false)
                {
                    pq.push({neighbour_wt, neighbour});
                }
            }
        }
        return sum;
    }
};