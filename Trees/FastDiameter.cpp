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
    cin >> data;
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

int height(node *root)
{
    // base case
    if (root == NULL)
    {
        return 0;
    }

    // recurisve case
    int lsh = height(root->left);
    int rsh = height(root->right);
    return max(lsh, rsh) + 1;
}

int sum(node *root)
{
    // base case
    if (root == NULL)
    {
        return 0;
    }

    // recurisve case
    return sum(root->left) + sum(root->right) + root->data;
}

int diameter(node *root)
{
    // base case
    if (root == NULL)
    {
        return 0;
    }

    // recurisve case
    int op1 = diameter(root->left);  // recursion tum mujhe lst ka diameter nikal k do
    int op2 = diameter(root->right); // recursion tum mujhe lst ka diameter nikal k do
    int op3 = height(root->left) + height(root->right);
    return max(op1, max(op2, op3));
}
class Pair
{
public:
    int height;
    int diameter;
};
Pair fastDiameter(node *root)
{
    Pair p;
    // base case
    if (root == NULL)
    {
        p.height = 0;
        p.diameter = 0;
        return p;
    }

    // recurisove case
    Pair l = fastDiameter(root->left);  // hum yeh expect kr rhe h ki recursion humhe left subtree ka pair return krega
    Pair r = fastDiameter(root->right); // hum yeh expect kr rhe h ki recursion humhe right subtree ka pair return krega

    // ab mujhe apne root node ka pair set krna h
    p.height = max(l.height, r.height) + 1; // apne root node ka height set krne k liye

    int op1 = l.diameter;
    int op2 = r.diameter;
    int op3 = l.height + r.height;
    p.diameter = max(op1, max(op2, op3)); // apne root node ka diameter set krne k liye

    return p;
}
int main()
{
    node *root = buildTree();
    cout << "PreOrder Traversal: ";
    preorder(root);
    cout << endl;
    // cout << "Count number of nodes: " << countNode(root);
    // cout << "Hiegth  of Trees: " << height(root);
    // cout << "Sum  of Trees: " << sum(root);
    // cout << "Diameter of Trees: " << diameter(root);

    Pair x = fastDiameter(root);
    cout << "Diameter of tree " << x.diameter << endl;

    return 0;
}