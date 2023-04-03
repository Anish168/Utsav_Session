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
int preOrder[] = {8, 3, 1, 6, 4, 7, 10, 14, 13};
int inOrder[] = {1, 3, 4, 6, 7, 8, 10, 13, 14};
int i = 0;
node *createTree(int start, int end)
{
    // base case
    if (start > end)
    {
        return NULL;
    }

    int element = preOrder[i];
    node *root = new node(element);
    i++;
    int k = -1;
    for (int j = start; j <= end; j++)
    {
        if (inOrder[j] == element)
        {
            k = j; // index jha pr mujhe wo element mila h inorder array m
            break;
        }
    }
    root->left = createTree(start, k - 1);
    root->right = createTree(k + 1, end);
    return root;
}

int main()
{
    // node *root = buildLevelWiseTree();
    // levelOrder(root);
    int n = sizeof(inOrder) / sizeof(int);
    int start = 0;
    int end = n - 1;
    node *root = createTree(start, end);
    levelOrder(root);
    return 0;
}