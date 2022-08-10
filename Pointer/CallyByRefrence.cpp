#include <iostream>
using namespace std;
void update(int *u)
{
    *u = *u + 10;                               // yeh star alag h derefemce ka star h na ki pointer ka
    cout << "The value of u is " << *u << endl; // 100
}
int main()
{
    int a = 90;
    // int *mptr = &marks;
    cout << "The value of a is " << a << endl; // 90
    update(&a);
    cout << "The value of a is " << a << endl; // 100

    return 0;
}