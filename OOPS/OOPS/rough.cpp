#include <iostream>
using namespace std;
// class Bus
// {
// public:
//     void print();

// };
// class Truck
// {
// private:
//     int x;

// protected:
//     int y;

// public:
//     int c;

//     // friend void Bus :: print();
//     // friend class Bus;
    //    friend void print();
// };
// // void Bus::print()
// // {
// //     Truck t;
// //     t.x = 34;
// //     t.y = 54;
// //     cout << t.x + t.y << endl;
// // }
// int main()
// {
//     Bus b;
//     b.print();
//     return 0;
// }
#include <iostream>
#include <string.h>
using namespace std;
class student
{
public:
    // SMA
    //  int age;
    //  char name[100];

    // DMA
    int age;
    char *name;

    student(int age, char *name)
    {
        this->age = age;
        // shallow copy
        //  this->name = name;

        // Deep Copy
        this->name = new char[strlen(name) + 1];
        // char*name=new char[100];
        strcpy(this->name, name);
    }

    void display()
    {
        cout << "My name is " << this->name << " and age is:- " << this->age << endl;
    }
};
int main()
{
    char name[] = "utsav";
    // student s1;
    student s1(20, name);
    s1.display();

    name[3] = 't';
    student s2(23, name);
    s2.display();
    s1.display();
    s2.display();

    return 0;
}