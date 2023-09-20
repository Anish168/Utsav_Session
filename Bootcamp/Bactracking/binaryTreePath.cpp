class Solution {
public:
    void solve(TreeNode* root, vector<string>&ans, string &temp)
    {
        //base case
        if(root == NULL)
        {
            return;
        }
        
        if(root->left == NULL && root->right == NULL)
        {
            string oldTemp = temp;
            temp = temp + to_string(root->val);
            ans.push_back(temp);
            temp = oldTemp;
            return;
        }
        
        
        string oldTemp = temp;
        temp = temp + to_string(root->val);
        temp.push_back('-');
        temp.push_back('>');
        
        solve(root->left, ans, temp);
        solve(root->right, ans, temp);

        
        //backtrack
        temp = oldTemp;   
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string temp = "";
        
        solve(root, ans, temp);
        return ans;
    }
};