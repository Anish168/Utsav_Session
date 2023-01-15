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
// length using by iterative
int lengthll(node *head)
{
    int count = 0;
    node *curr = head;

    // loop
    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    return count;
}
void insertatanypos(node *&head, node *&tail, int data, int pos)
{
    if (pos == 0)
    {
        insertAtFront(head, tail, data);
        return;
    }

    if (pos >= lengthll(head)) // 6
    {
        insertAtTail(head, tail, data);
        return;
    }
    node *temp = head; // 8
    for (int jump = 1; jump <= pos - 1; jump++)
    {
        temp = temp->next; // 8--> 9
    }
    node *n = new node(data);
    n->next = temp->next;
    temp->next = n;
}

// --------------------------------------------------------------------------------------------
// Deletion
void deletionatfront(node *&head, node *&tail)
{
    // case 1:- if ll doesnt exit
    if (head == NULL)
    {
        return;
    }
    // case 2:- ek hi node h
    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }
    // case 3:- fully linked list
    node *temp = head;
    head = head->next;
    delete temp;
    temp = NULL;
}

void deleteattail(node *&head, node *&tail)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }

    node *temp = head;
    // loop
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete tail;
    tail = temp;
    tail->next = NULL;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;

    insertAtFront(head, tail, 11); // 11
    insertAtFront(head, tail, 10); // 10 --> 11
    insertAtFront(head, tail, 9);  // 9 --> 10 --> 11
    // printLinkedList(head);

    // insertAtTail(head, tail, 12); // 9 --> 10 --> 11 -->12
    // insertAtTail(head, tail, 13); // 9 --> 10 --> 11 -->12-->13
    // printLinkedList(head);

    insertatanypos(head, tail, 8, 0);  // 8-->9-->10-->11
    insertatanypos(head, tail, 20, 3); // 8-->9-->10-->20-->11
    // insertatanypos(head, tail, 15, 4);
    printLinkedList(head); // 8-->9-->10-->20-->11
    cout << endl;
    deletionatfront(head, tail);
    printLinkedList(head); //-->9-->10-->20-->11
    cout<<endl;
    deleteattail(head, tail);
    printLinkedList(head); //-->9-->10-->20-->
    return 0;
}