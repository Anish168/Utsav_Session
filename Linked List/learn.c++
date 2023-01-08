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
int main()
{

    node n1(5);    // n1 is an object of type node
    node n2(6);    // n2 is an object of type node
    n1.next = &n2; // link
    cout << "The data of n1 :-  " << n1.data << endl;
    // cout << "The data of n2 :-  " << n2.data << endl;
    cout << "The address of n2: -" << n1.next << endl;
    cout << "The data of n2 using n1 :-  " << (*n1.next).data << endl;
    cout << "The data of n2 using n1 :-  " << n1.next->data << endl;
    return 0;
}