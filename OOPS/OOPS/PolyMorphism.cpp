#include <iostream>
using namespace std;
// Tupes 1-->Compile Time Polymorphism
// 1.1 --> Function Overloading
// class A
// {
// public:
//     void display(string name)
//     {
//         cout << "Hello World" << endl;
//     }

//     int display(string name,int n)
//     {
//         cout << "Hello Universe" << endl;
//         return 0;
//     }
// };

// 1.2 -->Opeartor Overloading
// class A
// {
// public:
//     int x;
//     int y;

// opeartor overloading
// void operator+(A &y)
// {
//     int value2 = this->y;
//     int value1 = y.x;
//     cout << "Ans is: " << value1 * value2 << endl;
// }
// };

// Run Time Polymorphism
class A
{
public:
    int a;
    int b;
    void speak()
    {
        cout << "Speaking" << endl;
    }

    void add(int a, int b)
    {
        cout << this->a + this->b << endl;
    }
};

class B : public A
{
public:
    int a;
    int b;
    void speak()
    {
        cout << "Barking" << endl;
    }
    void add(int a, int b)
    {
        this->a=a;
        this->b=b;
        cout << this->a * this->b << endl;
    }
};
int main()
{
    B b;
    b.speak();
    // A a;
    // a.speak();
    b.add(2, 3);

    return 0;
}