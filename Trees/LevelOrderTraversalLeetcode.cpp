class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL)
        {
            return ans;
        }
        q.push(root);
        while(1)    //infinite loop
        {
            int size = q.size();
            //break condition
            if(size==0)
            {
                return ans;
            }
            vector<int>data;
           
            while(size>0)
            {
                TreeNode*x = q.front();
                q.pop();    
                data.push_back(x->val);
                if(x->left!=NULL)
                {
                    q.push(x->left);
                }
                if(x->right!=NULL)
                {
                    q.push(x->right);
                }
                size--;
            }
            ans.push_back(data);

        }
    }
};