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

// node *middle(node *head)
// {
//     node *slow = head;
//     node *fast = head;

//     // loop
//     while (fast->next != NULL) // tail k liye nhi ho jata
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     return slow;
//     // return slow->data;
// }
int middle(node *head)
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
    return slow->data;

    // even
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

void reverse(node *&head)
{
    node *prev = NULL;
    node *curr = head;
    node *n;

    // loop
    while (curr != NULL)
    {
        n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
    }
    // prev ko head m dal dena cuz phle jha head point kr rha hoga wo tail bn jayga
    head = prev;
    return;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    insertAtTail(head, tail, 33);  // 9 --> 10 --> 11 -->12-->13
    insertAtFront(head, tail, 11); // 11
    insertAtFront(head, tail, 10); // 10 --> 11
    insertAtFront(head, tail, 9);  // 9 --> 10 --> 11
    insertAtTail(head, tail, 2);   // 9 --> 10 --> 11 -->12-->13

    cout<<"Before Reverse:- "<<endl;
    printLinkedList(head);
    cout<<endl;
    reverse(head);
    cout<<"After Reverse:- "<<endl;
    printLinkedList(head);

    return 0;
}