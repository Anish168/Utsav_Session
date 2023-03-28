#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    // constructor
    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

node *buildTree()
{
    int data;
    cin >> data; // 8 3 1 -1 6 4 -1 -1 7 -1 -1 10 -1 14 13 -1 -1 -1
    // base case
    if (data == -1)
    {
        return NULL;
    }

    // recursive case
    node *root = new node(data);
    if (data == -5)
    {
        return root;
    }
    root->left = buildTree();
    root->right = buildTree();
    return root;
}


void preorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    // recursive case
    cout << root->data << endl;
    preorder(root->left);
    preorder(root->right);
}
void inorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    // recursive case
    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);
}
void postorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    // recursive case
    postorder(root->left);
    cout << root->data << endl;
    postorder(root->right);
}
int main()
{
    node *root = buildTree();
    cout << "PreOrder Traversal: " << endl;
    preorder(root);
    return 0;
}