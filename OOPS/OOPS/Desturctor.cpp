#include <iostream>
using namespace std;
class student
{
public:
    int age;
    int rollNo;

    void print()
    {
        cout << "Hello Dear..!!!" << endl;
    }
    ~student()
    {
        cout << "Main Destructor Hu..!!" << endl;
    }
};
int main()
{
    student s1;
    s1.print();

    student *s3 = new student;
    s3->print();
    delete s3;

    return 0;
}