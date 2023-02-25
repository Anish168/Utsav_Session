// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;

//     // constructor
//     node(int data)
//     {
//         this->data = data;
//         next = NULL;
//     }
// };

// class stack
// {
//     // yeh blueprint issliye yha hum kuch bhi value fix nhi krenge
//     // node *head=NULL; //can't fix wrna memory allocate ho jyegi bina object bne hi
//     node *head;
//     int length;

// public:
//     // constructor
//     stack()
//     {
//         head = NULL; // step 1 starting m stack nhi bna hoga
//         length = 0;
//     }

//     // push
//     void push(int data)
//     {
//         // insert at front
//         node *n = new node(data);
//         n->next = head;
//         head = n;
//         length++;
//     }

//     // pop
//     void pop()
//     {
//         // delete at front
//         if (head == NULL)
//         {
//             return;
//         }
//         // single node
//         else if (head->next == NULL)
//         {
//             delete head;
//             head = NULL;
//         }
//         // many nods
//         else
//         {
//             node *temp = head;
//             head = head->next;
//             delete temp; // delete likhne se wo link khtm ho gyi but link ka address abhi bhi h temp m bs link toot gyi
//             temp = NULL; // pointer m hum garbage value nhi rekhte issliye null kr diya i.e jo address pda tha ushe hta k null kr diya
//         }
//         length--;
//     }

//     // top
//     int top()
//     {
//         return head->data;
//     }

//     // size
//     int size()
//     {
//         return length;
//     }

//     // is Empty
//     bool empty()
//     {
        // if (head == NULL)
        // {
        //     return true;
        // }
        // return false;
//     }
// };
// int main()
// {
//     stack s;
//     s.push(22);
//     s.push(23);
//     s.push(24);
//     s.push(25);

//     while (!s.empty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     return 0;
// }

// Stack implemnet using template

#include <iostream>
using namespace std;
template <typename T>
class node
{
public:
    T data;
    node<T> *next;

    // constructor
    node(T data)
    {
        this->data = data;
        next = NULL;
    }
};

template<typename T>
class stack
{
    // yeh blueprint issliye yha hum kuch bhi value fix nhi krenge
    // node *head=NULL; //can't fix wrna memory allocate ho jyegi bina object bne hi
    node<T> *head;
    int length;

public:
    // constructor
    stack()
    {
        head = NULL; // step 1 starting m stack nhi bna hoga
        length = 0;
    }

    // push
    void push(T data)
    {
        // insert at front
        node<T> *n = new node<T>(data);
        n->next = head;
        head = n;
        length++;
    }

    // pop
    void pop()
    {
        // delete at front
        if (head == NULL)
        {
            return;
        }
        // single node
        else if (head->next == NULL)
        {
            delete head;
            head = NULL;
        }
        // many nods
        else
        {
            node<T> *temp = head;
            head = head->next;
            delete temp; // delete likhne se wo link khtm ho gyi but link ka address abhi bhi h temp m bs link toot gyi
            temp = NULL; // pointer m hum garbage value nhi rekhte issliye null kr diya i.e jo address pda tha ushe hta k null kr diya
        }
        length--;
    }

    // top
    T top()
    {
        return head->data;
    }

    // size
    int size()
    {
        return length;
    }

    // is Empty
    bool empty()
    {
        if (head == NULL)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    stack<int> s;
    s.push(22);
    s.push(23);
    s.push(24);
    s.push(25);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}