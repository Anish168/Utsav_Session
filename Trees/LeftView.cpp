void solve(Node*root, vector<int>&ans, int level,int &mltn)
{
    //base case
    if(root==NULL)
    {
        return;
    }
    
    //recursive case
    if(level>mltn)
    {
        ans.push_back(root->data);
        mltn = level;
    }
    solve(root->left , ans, level+1, mltn);
    solve(root->right , ans, level+1, mltn);
}

vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>ans;
   int mltn = 0;
   solve(root,ans,1,mltn);
   return ans;
}