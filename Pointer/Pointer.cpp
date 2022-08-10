#include <iostream>
using namespace std;
int main()
{
    // int x = 70;
    // float z = 54.342;
    // double y = 56.78965;

    // cout << "The value of x is " << x << endl;
    // cout << "The value of y is " << y << endl;
    // cout << "The value of z is " << z << endl;

    // cout << "The size of x is " << sizeof(x) << endl;
    // cout << "The size of y is " << sizeof(y) << endl;
    // cout << "The size of z is " << sizeof(z) << endl;

    // cout << "The Location at which x is present " << &x << endl; // hexadecimal m dega
    // cout << "The Location at which y is present " << &y << endl;
    // cout << "The Location at which z is present " << &z << endl;

    // cout << "The location size of x is " << sizeof(&x) << endl;
    // cout << "The location size of y is " << sizeof(&y) << endl;
    // cout << "The location size of z is " << sizeof(&z) << endl;

    // pointer is used to store the address of varaible
    // syntax:
    // datatype* name=&varible
    // datatype *name = &variable;
    // int *xptr = &x; // xptr is pointer of x
    // cout << "The address of x is " << &x << endl;
    // cout << "The address of x is " << xptr << endl;

    // // for storing address of pionter we make double pointer

    // int **dxptr = &xptr;
    // cout << "The address of  xptr " << &xptr << endl;
    // cout << "The address of  xptr " << dxptr << endl;

    // char ch = 'U';
    // cout << "The value of ch is " << ch << endl;
    // cout << "The size of ch is " << sizeof(ch) << endl;
    // cout << "The location at which ch is present " << &ch << endl; // instead of printing location it prints the value of char bucket till it gets null character

    // // char ch1 = 'A';
    // // cout << "The value of ch1 is " << ch1 << endl;
    // // cout << "The size of ch1 is " << sizeof(ch1) << endl;
    // // cout << "The location at which ch1 is present " << &ch1 << endl;

    // // Fooling of compiler to print address of charcater

    // cout << "The address of charater is by making fool of compiler " << (int *)&ch << endl;
    // cout << "The address of charater is by making fool of compiler " << (float *)&ch << endl;
    // cout << "The address of charater is by making fool of compiler " << (double *)&ch << endl;

    // Derefrence of address
    // address-->value(bucket ki value)
    //  *address---> bucket ki value

    // int marks = 70;
    // int *mptr = &marks;
    // cout << "The value of marks is " << marks << endl; // 70
    // cout << "The value of bucket by derfrence " << *(&marks) << endl;   // yeh star derefrence na ki pointer ka
    // cout << "The value of bucket by derfrence " << *(mptr) << endl;   // yeh star derefrence na ki pointer ka

    // making multiple pointer
    // int physics = 90, english = 80;
    // int *pptr = &physics;
    // int *eptr = &english;

    int marks = 90;
    int *mptr = &marks;
    cout << "The value of marks is " << marks << endl;     // 90
    cout << "The value of marks is " << marks + 1 << endl; // 91

    cout << "The address of marks is " << &marks << endl;
    cout << "The address of marks is " << &marks + 1 << endl;

    cout << "The address of marks using pointer " << mptr << endl;
    cout << "The address of marks using pointer " << mptr + 1 << endl;
    return 0;
}