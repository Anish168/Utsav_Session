class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        // Complete the function
        unordered_map<int,int>umap;
        for(int i = 0; i < n ; i++)
        {
            umap[arr[i]]++;
        }
        
        for(int i = 0; i < n; i++)
        {
            int key = arr[i];
            if(umap.find(key) != umap.end())
            {
                auto val = umap.find(key);
                if(val->second == 1)
                {
                    return arr[i];
                }
            }
        }
        return 0;
    } 
  
};