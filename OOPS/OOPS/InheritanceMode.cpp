#include <iostream>
using namespace std;
// parent class /super class
class Animal
{
protected:
    string breed;
    int weight;
    int age;

    int getweight()
    {
        return weight;
    }
};
class dog : private Animal
{
public:
    string color;

    int getage()
    {
        return age;
    }
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