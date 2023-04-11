#include <iostream>
#include <queue>
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

node *insertatbst(int data, node *root)
{
    // base case
    if (root == NULL)
    {
        root = new node(data);
        return root;
    }

    // recurssive case
    if (data <= root->data) // 10 <= 8   1<=8    1<=3
    {
        root->left = insertatbst(data, root->left); // 1 Null
        return root;
    }
    else
    {
        root->right = insertatbst(data, root->right);
        return root;
    }
}
node *buildbst()
{
    node *root = NULL;
    int data;
    cin >> data; // 8

    // loop
    while (data != -1)
    {
        root = insertatbst(data, root);
        cin >> data; // 3 //10    1   6
    }
    return root;
}

bool search(node *root, int key)
{
    // base acse
    if (root == NULL)
    {
        return false;
    }

    // recurisve case
    if (key == root->data)
    {
        return true;
    }
    if (key > root->data)
    {
        search(root->right, key);
    }
    else
    {
        search(root->left, key);
    }
}
void levelOrder(node *root)
{
    // It's an algorithm
    queue<node *> q; // node* means jo root h wo apka node* type ka h

    // 2nd step
    q.push(root);

    // 3rd step
    q.push(NULL);

    // loop
    while (!q.empty())
    {
        node *x = q.front();
        q.pop();
        // agar mujhe null mila
        if (x == NULL)
        {
            cout << endl;
            if (!q.empty()) // tb tk hi krna h jb tk queue m elements ho wrna infinite times chlne lg jyga
            {
                q.push(NULL);
            }
        }
        // value mila h
        else
        {
            cout << x->data << " "; // phle print krwaunga
            if (x->left != NULL)    // agar left child exit krta h tbhi push krunga
            {
                q.push(x->left);
            }
            if (x->right != NULL) // agar right child exit krta h tbhi push krunga
            {
                q.push(x->right);
            }
        }
    }
}

int main()
{
    // node *root = buildTree();
    node *root = buildbst();
    levelOrder(root);
    int key;
    cin >> key;
    if (search(root, key))
    {
        cout << "Key is found" << endl;
    }
    else
    {
        cout << "Key is not found" << endl;
    }

    return 0;
}