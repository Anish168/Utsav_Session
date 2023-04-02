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
            cout << x->data << " "; //phle print krwaunga
            if (x->left != NULL) // agar left child exit krta h tbhi push krunga
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
    node *root = buildTree();
    levelOrder(root);
    return 0;
}