#include <iostream>
using namespace std;
// 1. Function with no argument and no return
void addtwonumber()
{
    int a = 90, b = 76;
    int sum = a + b;
    cout << sum << endl;
}

// 2. Function with no argument but return
int multwonumber()
{
    int a = 90, b = 900;
    int mul = a * b;
    return mul;
}

// 3. Function with argumemnt and return
int multwonumber(int a, int b)
{
    int mul = a * b;
    return mul;
}

// 4. function with argument but no return
int multwonumber(int a, int b)
{
    int mul = a * b;
    cout << mul << endl;
}
void print()
{
    cout << "Hello ";
    cout << "Coding ";
    cout << "World ";
}
int main()
{

    return 0;
}
