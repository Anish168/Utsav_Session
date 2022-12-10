#include <iostream>
#include<string.h>
using namespace std;
class student
{
public:
    char *name;
    int rollNo;

    student(char *n)
    {
        // shallow copy
        this->name = name;

        // Deep copy
        this->name = new char(strlen(n)+1);
        strcpy(name,n);
    }

    void print()
    {
        cout << name << endl;
    }
};
int main()
{
    char name[] = "Anish";
    student s1(name);
    s1.print();

    name[2] = 'e';
    student s2(name);
    s2.print();

    s1.print();
    return 0;
}