#include <iostream>
using namespace std;
class student
{
public:
    int age;
    int rollNumber;

    void print()
    {
        cout << "This address:- " << this << endl;
        cout << "Hello dear..!!" << endl;
    }

    student()
    {
    }
};

int main()
{
    // SMA
    student s1;
    s1.print();
    cout << "The address of s1:- " << &s1 << endl;
    // s1.student();

    // DMA
    student *s3 = new student;
    // s3->student();
    // (*s3).print();
    s3->print();
    cout << "The address of s1:- " << s3 << endl;
    

    return 0;
}