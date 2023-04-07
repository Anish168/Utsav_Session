class Solution {
public:
    
    bool match(TreeNode*root, TreeNode* subRoot)
    {
        if(root!=NULL && subRoot!=NULL)
        {
            bool leftkaans = match(root->left, subRoot->left);
            bool rightkaans = match(root->right, subRoot->right);
            if(root->val == subRoot->val && leftkaans && rightkaans)
            {
                return true;
            }
            return false;
        }
        else if(root == NULL && subRoot == NULL)
        {
            return true;
        }
        return false;
    }
    bool ans = false;
    void inorder(TreeNode*root,TreeNode*subRoot)
    {
        if(root !=  NULL)
        {
            inorder(root->left, subRoot);
            bool x =match(root, subRoot);
            if(x)
            {
                ans = true;
            }
            inorder(root->right, subRoot);
        }
        
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        inorder(root, subRoot);
        return ans;
    }
};