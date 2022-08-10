#include <iostream>
using namespace std;
int main()
{
    // int radius = 32;
    // int *rptr = &radius;    //intialization
    // cout << "The circumfrenece of a circle is " << 2 * 3.14 * radius << endl;
    // cout << "The circumfrenece of a circle is " << 2 * 3.14 * (*rptr) << endl;

    // int radius = 32;
    // int *rptr;  //garbage value  //agar garbage value prrogram memory k bhr ki le li toh segmentation fault dega
    // cout << "The circumfrenece of a circle is " << 2 * 3.14 * (*rptr) << endl;

    // hum pointer ko kbhi khali nhi chod skte issliye NULL daal dette h
    int radius = 32;
    int *rptr = NULL;
    cout << "The circumfrenece of a circle is " << 2 * 3.14 * (*rptr) << endl;

    return 0;
}