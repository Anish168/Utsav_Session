#include <iostream>
using namespace std;
class student
{
    int age;
    int const rollnumber;

public:
    student(int age, int r) : rollnumber(r), age(age)
    {
        // this->age=age;
        // this->rollnumber=rollnumber;
    }

    void print()
    {
        cout << age << " " << rollnumber << endl;
    }
};
int main()
{
    student s(23, 1001);
    s.print();
    return 0;
}