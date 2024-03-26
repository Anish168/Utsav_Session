class Solution
{
public:
    /*  Function to implement Bellman Ford
     *   edges: vector of vectors which represents the graph
     *   S: source vertex to start traversing graph with
     *   V: number of vertices
     */
    vector<int> bellman_ford(int V, vector<vector<int>> &edges, int S)
    {
        // Code here
        vector<int> result(V, 1e8);
        result[S] = 0;

        for (int c = 1; c <= V - 1; c++)
        {
            for (auto &edge : edges)
            {
                int u = edge[0];
                int v = edge[1];
                int w = edge[2];
                // relax
                if (result[u] != 1e8 && result[u] + w < result[v])
                {
                    result[v] = result[u] + w;
                }
            }
        }
        // detecting -ve cycle
        for (auto &edge : edges)
        {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            if (result[u] != 1e8 && result[u] + w < result[v])
            {
                return {-1};
            }
        }
        return result;
    }
};