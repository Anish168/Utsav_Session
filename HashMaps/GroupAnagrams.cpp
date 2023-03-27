    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>umap;
        for(auto x: strs)
        {
            auto temp = x;
            sort(x.begin(), x.end());
            umap[x].push_back(temp);
        }
        
        for(auto y: umap)
        {
            vector<string>temp = y.second;
            ans.push_back(temp);
        }
        return ans;
    }