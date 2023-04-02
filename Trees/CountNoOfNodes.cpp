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
    // 8 3 1 -1 -1 6 4 -1 -1 7 -1 -1 10 -1 14 13 -1 -1 -1
    // base case
    if (data == -1)
    {
        return NULL;
    }

    // recursive case
    node *root = new node(data);

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
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
int countNode(node *root)
{
    // base case
    if (root == NULL)
    {
        return 0;
    }

    // recurisve case
    return countNode(root->left) + countNode(root->right) + 1; // 5 + 3 + 1 --> 9
}

int main()
{
    node *root = buildTree();
    cout << "PreOrder Traversal: ";
    preorder(root);
    cout<<endl;
    cout << "Count number of nodes: " << countNode(root);
    return 0;
}