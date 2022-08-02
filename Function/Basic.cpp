#include <iostream>
using namespace std;
// returntype functioname()
// {
// task;
// }

//forward declaration technique
int sub();
void addtwonumber()
{
    int a = 90, b = 76;
    int sum = a + b;
    cout << sum << endl;
}

int multwonumber()
{
    int a = 4, b = 20;
    int mul = a * b;
    return mul;
}
void print()
{
    cout << "Hello ";
    cout << "Coding ";
    cout << "World ";
}
int main()
{
    // addtwonumber();
    // cout<< multwonumber()<<endl;
    // print();

    // cout << "Hello ";
    // cout << "Coding ";
    // cout << "World ";

    // cout << "Hello ";
    // cout << "Coding ";
    // cout << "World ";

    // cout << "Hello ";
    // cout << "Coding ";
    // cout << "World ";

    // cout << "Hello ";
    // cout << "Coding ";
    // cout << "World ";

    // cout << "Hello ";
    // cout << "Coding ";
    // cout << "World ";

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Hello ";
    //     cout << "Coding ";
    //     cout << "World ";
    // }

    cout << "Anish " << endl;
    print();
    cout << "Bye" << endl;

    cout << "Utsav " << endl;
    print();
    cout << "Bye" << endl;

    cout<<sub()<<endl;
    return 0;
}

int sub()
{
    int a=90,b=100;
    int sub=b-a;
    return sub;
}