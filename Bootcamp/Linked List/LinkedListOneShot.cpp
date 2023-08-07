#include <iostream>
using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         next = NULL;
//     }
// };
// int main()
// {
//     node n1(54);
//     node n2(74);
//     cout << "The value of n1 bucket:- " << n1.data << endl;
//     cout << "The value of n2 bucket:- " << n2.data << endl;

//     // cout << "The next address of n1 bucket:- " << n1.next << endl;
//     // cout << "The next address of n2 bucket:- " << n2.next << endl;

//     n1.next = &n2;
//     cout << "The value of n2 by using n1 bucket:- " << n1.next->data << endl;
//     cout << "The value of n2 by using n1 bucket:- " << (*n1.next).data << endl;

//     return 0;
// }

// -------------------------------------------------------------------------------------
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         next = NULL;
//     }
// };
// int lengthlinkedlist(node *head)
// {
//     int count = 0;
//     while (head != NULL)
//     {
//         count++;
//         head = head->next;
//     }
//     return count;
// }

// void insertionatfront(node *&head, node *&tail, int data)
// {
//     node *n = new node(data);
//     if (head == NULL)
//     {
//         head = n;
//         tail = n;
//         return;
//     }
//     else
//     {
//         n->next = head;
//         head = n;
//     }
// }
// void insertattail(node *&head, node *&tail, int data)
// {
//     node *n = new node(data);
//     if (head == NULL)
//     {
//         head = n;
//         tail = n;
//         return;
//     }
//     else
//     {
//         tail->next = n;
//         tail=n;
//     }
// }
// void insertatanypos(node *&head, node *&tail, int pos, int data)
// {
//     if (pos == 0)
//     {
//         insertionatfront(head, tail, data);
//     }
//     else if (pos >= lengthlinkedlist(head))
//     {
//         insertattail(head, tail, data);
//     }
//     else
//     {
//         node *temp = head;
//         for (int jump = 1; jump <= pos - 1; jump++)
//         {
//             temp = temp->next;
//         }
//         node *n = new node(data);
//         n->next = temp->next;
//         temp->next = n;
//     }
// }
// void printlinkedlist(node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << "--> ";
//         head = head->next;
//     }
//     cout << endl;
// }
// int main()
// {
//     node *head = NULL;
//     node *tail = NULL;
//     insertionatfront(head, tail, 30);
//     insertionatfront(head, tail, 40);
//     printlinkedlist(head);

//     insertattail(head, tail, 30);
//     insertattail(head, tail, 40);
//     insertattail(head, tail, 70);
//     insertattail(head, tail, 90);
//     printlinkedlist(head);

//     insertatanypos(head, tail, 2, 50);
//     printlinkedlist(head);
//     return 0;
// }

// ----------------------------------------------------------------------------------------
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         next = NULL;
//     }
// };
// int lengthlinkedlist(node *head)
// {
//     int count = 0;
//     while (head != NULL)
//     {
//         count++;
//         head = head->next;
//     }
//     return count;
// }

// void insertionatfront(node *&head, node *&tail, int data)
// {
//     node *n = new node(data);
//     if (head == NULL)
//     {
//         head = n;
//         tail = n;
//         return;
//     }
//     else
//     {
//         n->next = head;
//         head = n;
//     }
// }
// void insertattail(node *&head, node *&tail, int data)
// {
//     node *n = new node(data);
//     if (head == NULL)
//     {
//         head = n;
//         tail = n;
//         return;
//     }
//     else
//     {
//         tail->next = n;
//         tail=n;
//     }
// }
// void insertatanypos(node *&head, node *&tail, int pos, int data)
// {
//     if (pos == 0)
//     {
//         insertionatfront(head, tail, data);
//     }
//     else if (pos >= lengthlinkedlist(head))
//     {
//         insertattail(head, tail, data);
//     }
//     else
//     {
//         node *temp = head;
//         for (int jump = 1; jump <= pos - 1; jump++)
//         {
//             temp = temp->next;
//         }
//         node *n = new node(data);
//         n->next = temp->next;
//         temp->next = n;
//     }
// }
// void printlinkedlist(node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << "--> ";
//         head = head->next;
//     }
//     cout << endl;
// }
// void deleteatfront(node *&head, node *&tail)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     else
//     {
//         node *temp = head;
//         head = head->next;
//         delete temp;
//     }
// }
// // void deleteattail(node *&head, node *&tail)
// // {
// //     if (head == NULL)
// //     {
// //         return;
// //     }
// //     else if (head->next == NULL)
// //     {
// //         delete head;
// //         head = NULL;
// //         tail = NULL;
// //         return;
// //     }
// //     else
// //     {
// //         node *temp = head;
// //         while (temp->next->next != NULL)
// //         {
// //             temp = temp->next;
// //         }
// //         delete tail;
// //         tail = temp;
// //         tail->next = NULL;
// //     }
// // }
// int main()
// {
//     node *head = NULL;
//     node *tail = NULL;
//     insertionatfront(head, tail, 30);
//     insertionatfront(head, tail, 40);

//     insertattail(head, tail, 30);
//     insertattail(head, tail, 40);
//     insertattail(head, tail, 70);
//     insertattail(head, tail, 90);

//     insertatanypos(head, tail, 2, 50);
//     printlinkedlist(head);

//     deleteatfront(head, tail);
//     printlinkedlist(head);

//     // deleteattail(head, tail);
//     // printlinkedlist(head);
//     return 0;
// }
// ----------------------------------------------------------------------------------------
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         next = NULL;
//     }
// };
// int lengthlinkedlist(node *head)
// {
//     int count = 0;
//     while (head != NULL)
//     {
//         count++;
//         head = head->next;
//     }
//     return count;
// }

// void insertionatfront(node *&head, node *&tail, int data)
// {
//     node *n = new node(data);
//     if (head == NULL)
//     {
//         head = n;
//         tail = n;
//         return;
//     }
//     else
//     {
//         n->next = head;
//         head = n;
//     }
// }
// void insertattail(node *&head, node *&tail, int data)
// {
//     node *n = new node(data);
//     if (head == NULL)
//     {
//         head = n;
//         tail = n;
//         return;
//     }
//     else
//     {
//         tail->next = n;
//         tail=n;
//     }
// }
// void insertatanypos(node *&head, node *&tail, int pos, int data)
// {
//     if (pos == 0)
//     {
//         insertionatfront(head, tail, data);
//     }
//     else if (pos >= lengthlinkedlist(head))
//     {
//         insertattail(head, tail, data);
//     }
//     else
//     {
//         node *temp = head;
//         for (int jump = 1; jump <= pos - 1; jump++)
//         {
//             temp = temp->next;
//         }
//         node *n = new node(data);
//         n->next = temp->next;
//         temp->next = n;
//     }
// }
// void printlinkedlist(node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << "--> ";
//         head = head->next;
//     }
//     cout << endl;
// }
// void deleteatfront(node *&head, node *&tail)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     else
//     {
//         node *temp = head;
//         head = head->next;
//         delete temp;
//     }
// }
// bool searchiterate(node *head, int key)
// {
//     while (head != NULL)
//     {
//         if (head->data == key)
//         {
//             return true;
//         }
//         head = head->next;
//     }
//     return false;
// }
// bool searchrec(node *head, int key)
// {
//     if (head == NULL)
//     {
//         return false;
//     }

//     if (head->data == key)
//     {
//         return true;
//     }
//     searchrec(head->next, key);
// }
// int main()
// {
//     node *head = NULL;
//     node *tail = NULL;
//     insertionatfront(head, tail, 30);
//     insertionatfront(head, tail, 40);

//     insertattail(head, tail, 30);
//     insertattail(head, tail, 40);
//     insertattail(head, tail, 70);
//     insertattail(head, tail, 90);

//     insertatanypos(head, tail, 2, 50);
//     printlinkedlist(head);

//     // if (searchiterate(head, 50))
//     // {
//     //     cout << "True" << endl;
//     // }
//     // else
//     // {
//     //     cout << "False" << endl;
//     // }

//     if (searchrec(head, 50))
//     {
//         cout << "True" << endl;
//     }
//     else
//     {
//         cout << "False" << endl;
//     }

//     return 0;
// }
// ----------------------------------------------------------------------------------------
// Reverse a linked list.
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         next = NULL;
//     }
// };
// int lengthlinkedlist(node *head)
// {
//     int count = 0;
//     while (head != NULL)
//     {
//         count++;
//         head = head->next;
//     }
//     return count;
// }
// void insertattail(node *&head, node *&tail, int data)
// {
//     node *n = new node(data);
//     if (head == NULL)
//     {
//         head = n;
//         tail = n;
//         return;
//     }
//     else
//     {
//         tail->next = n;
//         tail = n;
//     }
// }
// void printlinkedlist(node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << "--> ";
//         head = head->next;
//     }
//     cout << endl;
// }
// node *reverse(node *&head, node *&tail)
// {
//     node *prev = NULL;
//     node *curr = head;
//     node *n;

//     while (curr != NULL)
//     {
//         n = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = n;
//     }
//     head = prev;
//     return head;
// }

// int main()
// {
//     node *head = NULL;
//     node *tail = NULL;
//     insertattail(head, tail, 30);
//     insertattail(head, tail, 40);
//     insertattail(head, tail, 70);
//     insertattail(head, tail, 90);

//     printlinkedlist(head);

//     node *fans = reverse(head, tail);
//     printlinkedlist(fans);
//     return 0;
// }
// ---------------------------------------------------------------------------------------
// Merge Two Sorted Linked List
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         next = NULL;
//     }
// };
// int lengthlinkedlist(node *head)
// {
//     int count = 0;
//     while (head != NULL)
//     {
//         count++;
//         head = head->next;
//     }
//     return count;
// }
// void insertattail(node *&head, node *&tail, int data)
// {
//     node *n = new node(data);
//     if (head == NULL)
//     {
//         head = n;
//         tail = n;
//         return;
//     }
//     else
//     {
//         tail->next = n;
//         tail = n;
//     }
// }
// void printlinkedlist(node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << "--> ";
//         head = head->next;
//     }
//     cout << endl;
// }
// node *mergeTwoSorted(node *head1, node *head2)
// {
//     node *newhead;
//     if (head1 == NULL)
//     {
//         return head2;
//     }
//     else if (head2 == NULL)
//     {
//         return head1;
//     }
//     else
//     {
//         if (head1->data > head2->data)
//         {
//             newhead = head2;
//             newhead->next = mergeTwoSorted(head1, head2->next);
//         }
//         else
//         {
//             newhead = head1;
//             newhead->next = mergeTwoSorted(head1->next, head2);
//         }
//     }
//     return newhead;
// }
// int main()
// {
//     node *head1 = NULL;
//     node *tail1 = NULL;
//     node *head2 = NULL;
//     node *tail2 = NULL;
//     int data;
//     int m, n;
//     cin >> m >> n;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> data;
//         insertattail(head1, tail1, data);
//     }
//     for (int j = 0; j < n; j++)
//     {
//         cin >> data;
//         insertattail(head2, tail2, data);
//     }
//     node *fans = mergeTwoSorted(head1, head2);
//     printlinkedlist(fans);
//     return 0;
// }
// -------------------------------------------------------------------------------------
// Mid Runner Technique
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         next = NULL;
//     }
// };
// int lengthlinkedlist(node *head)
// {
//     int count = 0;
//     while (head != NULL)
//     {
//         count++;
//         head = head->next;
//     }
//     return count;
// }
// void insertattail(node *&head, node *&tail, int data)
// {
//     node *n = new node(data);
//     if (head == NULL)
//     {
//         head = n;
//         tail = n;
//         return;
//     }
//     else
//     {
//         tail->next = n;
//         tail = n;
//     }
// }
// void printlinkedlist(node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << "--> ";
//         head = head->next;
//     }
//     cout << endl;
// }
// int mid(node *head, node *tail)
// {
//     // odd length
//     //  node *slow = head;
//     //  node *fast = head;

//     // while (fast->next != NULL)
//     // {
//     //     slow = slow->next;
//     //     fast = fast->next->next;
//     // }
//     // return slow->data;

//     // even length and odd
//     node *slow = head;
//     node *fast = head->next;

//     while (fast != NULL && fast->next != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     return slow->data;
// }
// int main()
// {
//     node *head1 = NULL;
//     node *tail1 = NULL;
//     int m, data;
//     cin >> m;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> data;
//         insertattail(head1, tail1, data);
//     }
//     cout << "The mid is:- " << mid(head1, tail1) << endl;
//     return 0;
// }

// ---------------------------------------------------------------------------------------
// Merge Sort
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         next = NULL;
//     }
// };
// node *mid(node *head)
// {
//     node *slow = head;
//     node *fast = head->next;

//     while (fast != NULL && fast->next != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     return slow;
// }
// void insertattail(node *&head, node *&tail, int data)
// {
//     node *n = new node(data);
//     if (head == NULL)
//     {
//         head = n;
//         tail = n;
//         return;
//     }
//     else
//     {
//         tail->next = n;
//         tail = n;
//     }
// }
// void printlinkedlist(node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << "--> ";
//         head = head->next;
//     }
//     cout << endl;
// }
// node *mergeTwoSorted(node *head1, node *head2)
// {
//     if (head1 == NULL)
//     {
//         return head2;
//     }

//     if (head2 == NULL)
//     {
//         return head1;
//     }

//     //recursive case
//     node *newhead;
//     if (head1->data > head2->data)
//     {
//         newhead = head2;
//         newhead->next = mergeTwoSorted(head1, head2->next);
//     }
//     else
//     {
//         newhead = head1;
//         newhead->next = mergeTwoSorted(head1->next, head2);
//     }

//     return newhead;
// }
// node *mergeSort(node *head)
// {
//     // base case
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }

//     node *m = mid(head);
//     node *h1 = head;
//     node *h2 = m->next;
//     m->next = NULL;

//     h1 = mergeSort(h1);
//     h2 = mergeSort(h2);

//     node *fans = mergeTwoSorted(h1, h2);
//     return fans;
// }
// int main()
// {
//     node *head1 = NULL;
//     node *head2 = NULL;
//     node *tail1 = NULL;
//     int m,n, data;
//     cin >> m>>n;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> data;
//         insertattail(head1, tail1, data);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cin >> data;
//         insertattail(head1, tail1, data);
//     }
//     // node *fans = mergeSort(head1);
//     // printlinkedlist(fans);
//     node* fans=mergeTwoSorted(head1,head2);
//     printlinkedlist(fans);
//     return 0;
// }
// -----------------------------------------------------------------------------------------

// cycle detection
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         next = NULL;
//     }
// };
// node *mid(node *head)
// {
//     node *slow = head;
//     node *fast = head->next;

//     while (fast != NULL && fast->next != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     return slow;
// }
// bool cycleDetection(node *head)
// {
//     node *slow = head;
//     node *fast = head;

//     while (fast != NULL && fast->next != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//         if (slow == fast)
//         {
//             return true;
//         }
//     }
//     return false;
// }
// void insertattail(node *&head, node *&tail, int data)
// {
//     node *n = new node(data);
//     if (head == NULL)
//     {
//         head = n;
//         tail = n;
//         return;
//     }
//     else
//     {
//         tail->next = n;
//         tail = n;
//     }
// }
// void printlinkedlist(node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << "--> ";
//         head = head->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     node *head = NULL;
//     node *tail = NULL;
//     int m, data;
//     cin >> m;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> data;
//         insertattail(head, tail, data);
//     }
//     printlinkedlist(head);
//     if (cycleDetection(head))
//     {
//         cout << "Yes" << endl;
//     }
//     else
//     {
//         cout << "No" << endl;
//     }

//     return 0;
// }
// ----------------------------------------------------------------------------------------
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         next = NULL;
//     }
// };
// node *mid(node *head)
// {
//     node *slow = head;
//     node *fast = head->next;

//     while (fast != NULL && fast->next != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     return slow;
// }
// bool cycleDetection(node *head)
// {
//     node *slow = head;
//     node *fast = head;

//     while (fast != NULL && fast->next != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//         if (slow == fast)
//         {
//             return true;
//         }
//     }
//     return false;
// }
// void insertattail(node *&head, node *&tail, int data)
// {
//     node *n = new node(data);
//     if (head == NULL)
//     {
//         head = n;
//         tail = n;
//         return;
//     }
//     else
//     {
//         tail->next = n;
//         tail = n;
//     }
// }
// void buildcycle(node *&head, node *&tail)
// {
//     tail->next = head->next->next;
// }
// void printlinkedlist(node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << "--> ";
//         head = head->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     node *head = NULL;
//     node *tail = NULL;
//     int m, data;
//     cin >> m;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> data;
//         insertattail(head, tail, data);
//     }
//     printlinkedlist(head);
//     buildcycle(head, tail);
//     printlinkedlist(head);
//     return 0;
// }
// ---------------------------------------------------------------------------------------
// cycle to linear list
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         next = NULL;
//     }
// };
// node *mid(node *head)
// {
//     node *slow = head;
//     node *fast = head->next;

//     while (fast != NULL && fast->next != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     return slow;
// }
// bool cycleDetection(node *head)
// {
//     node *slow = head;
//     node *fast = head;

//     while (fast != NULL && fast->next != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//         if (slow == fast)
//         {
//             return true;
//         }
//     }
//     return false;
// }
// void insertattail(node *&head, node *&tail, int data)
// {
//     node *n = new node(data);
//     if (head == NULL)
//     {
//         head = n;
//         tail = n;
//         return;
//     }
//     else
//     {
//         tail->next = n;
//         tail = n;
//     }
// }
// void buildcycle(node *&head, node *&tail)
// {
//     tail->next = head->next->next;
// }
// void printlinkedlist(node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << "--> ";
//         head = head->next;
//     }
//     cout << endl;
// }
// void breakCycle(node *head, node *tail)
// {
//     node *slow = head;
//     node *fast = head;
//     node *prev;
//     while (fast != NULL && fast->next != NULL)
//     {
//         prev = slow;
//         slow = slow->next;
//         fast = fast->next->next;
//         if (slow == fast)
//         {
//             break;
//         }
//     }
//     slow = head;

//     while (slow != fast)
//     {
//         slow = slow->next;
//         fast = fast->next;
//         prev = prev->next;
//     }
//     prev->next = NULL;
// }
// int main()
// {
//     node *head = NULL;
//     node *tail = NULL;
//     int m, data;
//     cin >> m;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> data;
//         insertattail(head, tail, data);
//     }
//     printlinkedlist(head);
//     buildcycle(head, tail);
//     if (cycleDetection(head))
//     {
//         cout << "Yes" << endl;
//     }
//     else
//     {
//         cout << "No" << endl;
//     }
//     breakCycle(head,tail);
//     printlinkedlist(head);

//     return 0;
// }
// --------------------------------------------------------------------------------------
