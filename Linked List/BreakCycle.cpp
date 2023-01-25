#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    // constructor
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void insertatfront(node *&head, node *&tail, int data)
{
    node *n = new node(data);

    if (head == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    else
    {
        n->next = head;
        head = n;
    }
}
int lengthlinkedlist(node *head)
{
    node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
bool iscyclic(node *head)
{
    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}
void printlinkedlist(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " --> ";
        temp = temp->next;
    }
    cout << endl;
}
void createcycle(node *&head, node *&tail, int pos)
{
    node *temp = head;
    for (int i = 0; i < pos; i++)
    {
        temp = temp->next;
    }

    tail->next = temp;
}

void breakCycle(node *&head, node *&tail)
{
    // Step 1:- Is it cyclic?
    node *slow = head;
    node *fast = head;
    node* prev;
    while (fast != NULL && fast->next != NULL)
    {
        prev = slow;
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            //if yes then break it 
            break;
        }
    }

    // Step 2:- ek pointer ko mai head pr point krwa dunga or dono ko by 1 step move krwaunga jb tk dono pointer wps nhi milte mai loop traverse krunga
    //    or is batt ki surity h ki wo wps milenge
    slow = head;
    while (fast != slow)
    {
        fast = fast->next;
        slow = slow->next;
        prev=prev->next;
    }

    //Ste 3:- prev k next m null daal do to make it linear LL
    prev->next = NULL;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;

    insertatfront(head, tail, 90);
    insertatfront(head, tail, 63);
    insertatfront(head, tail, 20);
    insertatfront(head, tail, 100);
    insertatfront(head, tail, 50);

    createcycle(head, tail,2);
    // printlinkedlist(head);
    if (iscyclic(head))
    {
        cout << "cycle is  present. " << endl;
    }
    else
    {
        cout << "Cycle is not present. " << endl;
    }
    breakCycle(head,tail);
    printlinkedlist(head);
    return 0;
}