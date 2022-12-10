#include <iostream>
using namespace std;
// userdefined datatype
// syntax: class variable {};
// blueprint
class car
{
    // by default private hota h access modifier
private:
    string name;
    int price;
    int seats;
    int modelno;

public:
    car()
    {
        cout << "I m a default constructor" << endl;
    }

    void print()
    {
        cout << "Car name is:- " << name << endl;
        cout << "Price is:- " << price << endl;
        cout << "Seats is:- " << seats << endl;
        cout << "Model no:- " << modelno << endl;
    }

    void setter(string name, int price, int seats, int modelno)
    {
        this->name = name;
        this->price = price;
        this->seats = seats;
        this->modelno = modelno;
    }

    string gettername()
    {
        return name;
    }

    int getterprice()
    {
        return price;
    }
};
int main()
{
    car a;
    // a.name="hyundai";
    // a.price=200;
    // a.seats=2;
    // a.modelno=4;
    a.setter("BMW", 80, 2, 3030);
    cout << "The name of car is:- " << a.gettername() << endl;
    return 0;
}