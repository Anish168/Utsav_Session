#include <iostream>
using namespace std;
// userdefined datatype
// syntax: class variable {};
// blueprint
class car
{
public:
    string name;
    int price;
    int seats;
    int modelno;
};
int main()
{
    car a; // a is an object type of car
    // class k andr buckets ko use krne k liye hum dot use krte h
    a.name = "Audi";
    a.price = 20000;
    a.seats = 2;
    a.modelno = 2022;

    cout << "The name of Utsav's car is:- " << a.name << endl;
    cout << "The price of car:- " << a.price << endl;
    cout << "The seat in car is:- " << a.seats << endl;
    cout << "The model no is:- " << a.modelno << endl;

    car b; // b is an object type of car
    b.name = "BMW";
    b.price = 3000;
    b.seats = 2;
    b.modelno = 2021;

    cout << "The name of Anish's car is:- " << b.name << endl;
    cout << "The price of car:- " << b.price << endl;
    cout << "The seat in car is:- " << b.seats << endl;
    cout << "The model no is:- " << b.modelno << endl;

    return 0;
}