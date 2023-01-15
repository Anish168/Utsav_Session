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
// recursive
bool search(node *head, int key)
{
    // base case
    if (head == NULL)
    {
        return false;
    }

    // recursive case
    if (head->data == key)
    {
        return true;
    }
    search(head->next, key);
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    insertAtFront(head, tail, 11); // 11
    insertAtFront(head, tail, 10); // 10 --> 11
    insertAtFront(head, tail, 9);  // 9 --> 10 --> 11
    // printLinkedList(head);

    insertAtTail(head, tail, 12); // 9 --> 10 --> 11 -->12
    insertAtTail(head, tail, 13); // 9 --> 10 --> 11 -->12-->13
    printLinkedList(head);
    return 0;
}