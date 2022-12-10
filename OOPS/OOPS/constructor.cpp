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

    // by default ek function present hota h jiska naam h constructor
    // constructor object bnane m help krta h
    // Golden point:- Whenever object is made constructor is called
    //  car()
    //  {

    // }
    // mai by default conatructor ko override kr rha h
    car()
    {
        cout << "I m a default constructor" << endl;
    }

    // parametrized constructor
    // this is a keyword which store the address of class bucket
    car(string name, int price, int seats, int modelno)
    {
        cout << "I m parametrized constructor." << endl;
        this->name = name;
        this->price = price;
        this->seats = seats;
        this->modelno = modelno;
    }

    void print()
    {
        cout << "Car name is:- " << name << endl;
        cout << "Price is:- " << price << endl;
        cout << "Seats is:- " << seats << endl;
        cout << "Model no:- " << modelno << endl;
    }

    // copy constructor yeh bhi default h
    car(car &y)
    {
        name = y.name;
        price = y.price;
        modelno = y.modelno;
        seats = y.modelno;
    }
};
int main()
{
    // car a; // a is an object type of car
    // class k andr buckets ko use krne k liye hum dot use krte h
    // a.name = "Audi";
    // a.price = 20000;
    // a.seats = 2;
    // a.modelno = 2022;

    // cout << "The name of Utsav's car is:- " << a.name << endl;
    // cout << "The price of car:- " << a.price << endl;
    // cout << "The seat in car is:- " << a.seats << endl;
    // cout << "The model no is:- " << a.modelno << endl;

    // cout << endl;

    // car b; // b is an object type of car
    // b.name = "BMW";
    // b.price = 3000;
    // b.seats = 2;
    // b.modelno = 2021;

    // cout << "The name of Anish's car is:- " << b.name << endl;
    // cout << "The price of car:- " << b.price << endl;
    // cout << "The seat in car is:- " << b.seats << endl;
    // cout << "The model no is:- " << b.modelno << endl;

    // car c("Nano", 1000, 4, 2018);

    // cout << "The name of Anish's car is:- " << c.name << endl;
    // cout << "The price of car:- " << c.price << endl;
    // cout << "The seat in car is:- " << c.seats << endl;
    // cout << "The model no is:- " << c.modelno << endl;

    car d("Hyundai", 4000, 6, 2022); // parametrized constructor
    d.print();

    car e(d); // copy constructor
    // e.name=d.name;
    // e.price=e.price;
    // e.seats=d.seats;
    // e.modelno=d.modelno;
    e.print();
    return 0;
}