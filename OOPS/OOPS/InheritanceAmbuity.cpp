#include <iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "Hello people Of A" << endl;
    }
};

class B
{
public:
    void show()
    {
        cout << "Hello People Of B" << endl;
    }
};

//to overcome this situation we follow syntax:- object.class_name :: method_name()
class C : public B, public A
{
};


int main()
{
    C c;
    // c.show();   //compiler bhai confuse ho gye ki kiski batt ho rhi h
    c.A :: show();
    return 0;
}