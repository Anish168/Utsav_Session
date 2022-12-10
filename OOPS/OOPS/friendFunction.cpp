#include <iostream>
using namespace std;
class bus
{
public:
    void print();
    void print1();
    void print2();
};
class truck
{
private:
    int x;

protected:
    int y;

public:
    int z;

    friend void bus ::print(); // Utsav wants to access whatsup
    // friend void bus ::print1();  //Utsav wants to access gallery
    // friend void bus ::print2();  //Utsav wants to access insta
    friend class bus; // Utsav wants to access wverything
    friend void sum();  //rah chlta mushafir jo sirf phone use krna chata h
};

void bus::print()
{
    truck t;
    t.x = 23;
    t.y = 21;
    t.z = 11;
    cout << t.x + t.y + t.z << endl;
}

void sum()
{
    truck t;
    t.x = 9;
    t.y = 8;
    cout << t.x + t.y << endl;
}

int main()
{
    bus volvo;
    volvo.print();
    return 0;
}