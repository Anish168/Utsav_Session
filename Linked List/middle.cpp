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
int main()
{
    node *head = NULL;
    node *tail = NULL;

    insertAtTail(head, tail, 33);  // 9 --> 10 --> 11 -->12-->13
    insertAtFront(head, tail, 11); // 11
    insertAtFront(head, tail, 10); // 10 --> 11
    insertAtFront(head, tail, 9);  // 9 --> 10 --> 11
    insertAtTail(head, tail, 2);   // 9 --> 10 --> 11 -->12-->13
    insertAtTail(head, tail, 12);  // 9 --> 10 --> 11 -->12
    insertAtFront(head, tail, 90); // 9 --> 10 --> 11
    insertAtTail(head, tail, 3);   // 9 --> 10 --> 11 -->12-->13
    insertAtFront(head, tail, 91); // 9 --> 10 --> 11
    insertAtTail(head, tail, 13);  // 9 --> 10 --> 11 -->12-->13
    insertAtTail(head, tail, 22);  // 9 --> 10 --> 11 -->12-->13
    insertAtTail(head, tail, 554); // 9 --> 10 --> 11 -->12-->13

    // printLinkedList(head);

    printLinkedList(head);
    cout << endl;
    // node *fans = middle(head);   //addresss return krega slow ka ushke maine fans m store kr diya
    // cout << fans->data << endl;
    cout << middle(head) << endl;
    return 0;
}