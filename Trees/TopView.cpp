class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int>ans;
        map<int,int>mp;
        if(root == NULL)
        {
            return ans;
        }
        queue<pair<Node*,int>>q;
        q.push(make_pair(root, 0));
        while(!q.empty())
        {
            pair<Node*, int> temp = q.front();
            q.pop();
            
            Node* topNode = temp.first;
            int hd = temp.second;
            
            if(mp.find(hd) == mp.end())
            {
                //if one hd is present then do nothing
                mp[hd] = topNode->data;
            }
            
            if(topNode->left)
            {
                q.push(make_pair(topNode->left, hd - 1));
            }
            
            if(topNode->right)
            {
                q.push(make_pair(topNode->right , hd + 1));
            }
        }
        
        for(auto i: mp)
        {
            ans.push_back(i.second);
        }
        return ans;
    }

};