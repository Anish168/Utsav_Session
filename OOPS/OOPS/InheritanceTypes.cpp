#include <iostream>
using namespace std;
// parent class /super class
// single inheritance
// class Animal
// {
// public:
//     string breed;
//     int weight;
//     int age;

//     int getweight()
//     {
//         return weight;
//     }
// };
// class dog : public Animal
// {
// public:
//     string color;

//     int getage()
//     {
//         return age;
//     }
//     void speaking()
//     {
//         cout << "Barking" << endl;
//     }
// };

// MultiLevel Inheritance
// class Animal
// {
// public:
//     string breed;
//     int weight;
//     int age;

//     int getweight()
//     {
//         return weight;
//     }
// };

// class dog : public Animal
// {
// public:
//     string color;

//     int getage()
//     {
//         return age;
//     }
//     void speaking()
//     {
//         cout << "Barking" << endl;
//     }
// };

// class pubby : public dog
// {
// public:
//     string cuteness;
// };

// Multiple
// class Animal
// {
// public:
//     string breed;
//     int weight;
//     int age;

//     int getweight()
//     {
//         return weight;
//     }
// };

// class dog
// {
// public:
//     string color;
//     int age;
//     int getage()
//     {
//         return age;
//     }
//     void speaking()
//     {
//         cout << "Barking" << endl;
//     }
// };

// class pubby : public Animal, public dog
// {
// public:
//     string cuteness;
// };

// Hierarchical
// class Animal
// {
// public:
//     string breed;
//     int weight;
//     int age;

//     int getweight()
//     {
//         return weight;
//     }
// };

// class dog : public Animal
// {
// public:
//     string color;

//     int getage()
//     {
//         return age;
//     }
//     void speaking()
//     {
//         cout << "Barking" << endl;
//     }
// };

// class bitch : public Animal
// {
// public:
//     int babies;
// };

// Hybrid
// class A
// {
// public:
//     string breed;
//     int weight;
//     int age;

//     int getweight()
//     {
//         return weight;
//     }
// };

// class B : public A
// {
// public:
//     string color;

//     int getage()
//     {
//         return age;
//     }
//     void speaking()
//     {
//         cout << "Barking" << endl;
//     }
// };

// class D
// {
// public:
//     string alpha;
// };
// class C : public A, public D
// {
// public:
//     int babies;
// };

int main()
{
    dog d;
    cout << d.age << endl;
    cout << d.breed << endl;
    cout << d.color << endl;
    d.speaking();
    return 0;
}