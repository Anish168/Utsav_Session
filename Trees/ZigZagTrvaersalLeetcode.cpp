class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL)
        {
            return ans;
        }
        q.push(root);
        int level = 0;
        while(1)    //infinite loop
        {
            int size = q.size();
            //break condition
            if(size==0)
            {
                return ans;
            }
            vector<int>data;
           level++; //2
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
            if(level%2 == 0)
            {
                reverse(data.begin(), data.end());
            }
            ans.push_back(data);

        }
    }
};