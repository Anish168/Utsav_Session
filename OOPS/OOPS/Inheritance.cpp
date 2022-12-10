#include <iostream>
using namespace std;
// parent class /super class
class Animal
{
public:
    string breed;
    int weight;
    int age;

    int getweight()
    {
        return weight;
    }
};
// I want to inherit Animal class properties
//  syntax:- class child_class(name) : acess modifier parent class
class dog : public Animal
{
public:
    string color;
    void speaking()
    {
        cout << "Barking" << endl;
    }
};
int main()
{
    dog d;
    cout << d.age << endl;
    cout << d.breed << endl;
    cout << d.color << endl;
    d.speaking();
    return 0;
}