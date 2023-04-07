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

node *buildLevelWiseTree()
{
    node *root = NULL;
    int data;
    cin >> data;

    queue<node *> q;
    root = new node(data); // 8
    q.push(root);

    // loop
    while (!q.empty())
    {
        node *x = q.front();
        q.pop();
        int leftChild, rightChild;
        cin >> leftChild >> rightChild; // 10 3

        if (leftChild != -1)
        {
            x->left = new node(leftChild);
            q.push(x->left);
        }

        if (rightChild != -1)
        {
            x->right = new node(rightChild);
            q.push(x->right);
        }
    }
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

void mirror(node *root) //
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // recursive case
    swap(root->left, root->right);
    mirror(root->left);
    mirror(root->right);
}
void rightSideView(node *root, int level, int &mlttn)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // recusrive case
    if (level > mlttn)
    {
        cout << root->data << " "; // 8
        mlttn = level;             // 1
    }

    rightSideView(root->right, level + 1, mlttn);
    rightSideView(root->left, level + 1, mlttn);
}
int main()
{
    node *root = buildLevelWiseTree();
    levelOrder(root);
    mirror(root);
    levelOrder(root);

    int level = 1;
    int mlttn = 0; // maximum level traverse till now
    rightSideView(root, level, mlttn);

    return 0;
}