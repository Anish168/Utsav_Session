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

void swapping(node *&head, int k)
{
    node *temp = head;
    for (int i = 1; i < k; i++)
    {
        temp = temp->next;
    }
    node *fast = temp;
    node *slow = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        slow = slow->next;
    }
    swap(slow->data, fast->data);
}
int main()
{
    node *head = NULL;
    node *tail = NULL;

    insertAtFront(head, tail, 5); // 11
    insertAtFront(head, tail, 4); // 10 --> 11
    insertAtFront(head, tail, 3); // 96 -->10 -->11
    insertAtFront(head, tail, 2); // 59-->96 -->10 -->11
    insertAtFront(head, tail, 1); // 19-->59-->96 -->10 -->11
    // printLinkedList(head);

    // insertAtTail(head, tail, 12); // 9 --> 10 --> 11 -->12
    // insertAtTail(head, tail, 13); // 9 --> 10 --> 11 -->12-->13

    
    swapping(head, 2);  //19-->10-->96 -->59 -->11
    printLinkedList(head);
    return 0;
}