#include <iostream>
using namespace std;
class node
{
public:
    // BLURPRINT
    int data;
    node *next;

    // constructor
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void insertAtFront(node *&head, node *&tail, int data)
{
    node *n = new node(data);
    if (head == NULL)
    {
        // linked list exit abhi nhi krti
        // toh mai head ko bhi n pr point kr dunga
        head = n;
        tail = n;
        return;
    }
    n->next = head;
    head = n;
}
void insertAtTail(node *&head, node *&tail, int data)
{
    node *n = new node(data);
    if (head == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    tail->next = n;
    tail = n;
}
void printLinkedList(node *head)
{
    node *temp = head;
    // loop
    while (temp != NULL)
    {
        cout << temp->data << " -->  ";
        temp = temp->next;
    }
}

node *mergeTwoSortedLL(node *head1, node *head2)
{
    node *newhead;
    // base case
    if (head1 == NULL && head2 == NULL)
    {
        return NULL;
    }

    if (head2 == NULL)
    {
        return head1;
    }

    if (head1 == NULL)
    {
        return head2;
    }

    // recursive case
    if (head1->data < head2->data)
    {
        newhead = head1;
        newhead->next = mergeTwoSortedLL(head1->next, head2);
    }
    else
    {
        newhead = head2;
        newhead->next = mergeTwoSortedLL(head1, head2->next);
    }
    return newhead;
}
node *middle(node *head)
{
    node *slow = head;
    // node *fast = head->next;
    node *fast = head;

    // loop
    // odd length
    while (fast != NULL && fast->next != NULL) // tail k liye nhi ho jata
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    // return slow;
    return slow;
}
node *mergeSort(node *head)
{
    // abse case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // recursive case
    node *mid = middle(head);
    node *lh1 = head;
    node *lh2 = mid->next;
    mid->next = NULL;

    lh1 = mergeSort(lh1);
    lh2 = mergeSort(lh2);

    node *fans = mergeTwoSortedLL(lh1, lh2);
    return fans;
}
int main()
{
    // node *head1 = NULL;
    // node *head2 = NULL;
    // node *tail1 = NULL;
    // node *tail2 = NULL;
    // int data;
    // int m, n;
    // cin >> m >> n;
    // for (int i = 0; i < m; i++)
    // {
    //     cin >> data;
    //     insertAtFront(head1, tail1, data);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> data;
    //     insertAtFront(head2, tail2, data);
    // }
    // node *fans = mergeTwoSortedLL(head1, head2);
    // printLinkedList(fans);

    node *head = NULL;
    node *tail = NULL;
    insertAtFront(head, tail, 5);
    insertAtFront(head, tail, 3);
    insertAtFront(head, tail, 2);
    insertAtFront(head, tail, 1);
    insertAtFront(head, tail, 8);

    printLinkedList(head);
    cout << endl;
    node *ans = mergeSort(head);
    printLinkedList(ans);
    return 0;
}