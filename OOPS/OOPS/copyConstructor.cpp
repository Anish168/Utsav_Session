#include <iostream>
using namespace std;
class student
{
public:
    int age;
    int rollno;

    void print()
    {
        cout << "Hey people" << endl;
        cout << age << " and " << rollno << endl;
    }
};
int main()
{
    student s1;
    s1.age = 23;
    s1.rollno = 1001;
    s1.print();

    student s2(s1);
    s2.print();

    // copy assignment opertor
    student s3;
    s3 = s1;
    s3.print();

    return 0;
}