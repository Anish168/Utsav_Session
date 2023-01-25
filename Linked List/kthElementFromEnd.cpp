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

int kth(node *head, int k)
{
    node *temp = head;
    node *slow = head;

    // temp ko phle hi mai move kr dunga kth times
    for (int i = 0; i < k; i++)
    {
        temp = temp->next;
    }

    // ab mai slow or temp ko ssath 2 chalunga or jha pr slow point krega last m wo return krunga
    while (temp != NULL)
    {
        slow = slow->next;
        temp = temp->next;
    }
    return slow->data;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;

    insertAtFront(head, tail, 11);  // 11
    insertAtFront(head, tail, 10);  // 10 --> 11
    insertAtFront(head, tail, 76);  // 9 --> 10 --> 11
    insertAtFront(head, tail, 92);  // 9 --> 10 --> 11
    insertAtFront(head, tail, 231); // 9 --> 10 --> 11
    printLinkedList(head);
    cout << endl;
    cout << "The element is:- " << kth(head, 2) << endl;
    return 0;
}