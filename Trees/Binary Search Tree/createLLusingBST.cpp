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

void printRange(node *root, int k1, int k2) // root 1 10
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // recursive
    printRange(root->left, k1, k2);           // phle lst recursion print krwa k aao
    if (root->data >= k1 && root->data <= k2) // agar root ka data inke beech lie krta h tbhi print
    {
        cout << root->data << " ";
    }
    printRange(root->right, k1, k2); // ab recusion rst print krwao
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

class linkedlist
{
public:
    node *head;
    node *tail;

    // constructor
    linkedlist()
    {
        head = NULL;
        tail = NULL;
    }
};

linkedlist createLLusingbst(node *root)
{
    linkedlist l;
    // base case
    if (root == NULL)
    {
        return l;
    }

    // recursive case

    // case 1:- left and right don't exit
    if (root->left == NULL && root->right == NULL)
    {
        l.head = root;
        l.tail = root;
        // return l;
    }

    // case 2: jb mere pass tree ka sirf lst hoga
    else if (root->left != NULL && root->right == NULL)
    {
        linkedlist x = createLLusingbst(root->left); // phle lst k liye recursion krega
        // mera kaam
        x.tail->right = root; // 8
        l.head = x.head;
        l.tail = root;
        // return l;
    }
    // case 3: jb mere pass tree ka sirf rst hoga

    else if (root->left == NULL && root->right != NULL)
    {
        linkedlist y = createLLusingbst(root->right); // phle rst k liye recursion krega
        // mera kaam
        root->right = y.head;
        l.head = root;
        l.tail = y.tail;
        // return l;
    }

    // case 4:- both exit
    else
    {
        linkedlist x = createLLusingbst(root->left);
        linkedlist y = createLLusingbst(root->right);
        x.tail->right = root;
        root->right = y.head;
        l.head = x.head;
        l.tail = y.tail;
        // return l;
    }
    return l;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->right;
    }
}

int main()
{
    // node *root = buildTree();
    node *root = buildbst();
    levelOrder(root);
    linkedlist z = createLLusingbst(root);
    print(z.head);
    return 0;
}