#include <iostream>
using namespace std;
void updatex(int &y)    //chintu
{
    y = y + 10;
    cout << "The of x in function is " << y << endl; //20

}
// int updatex(int x)
// {
//     x = x + 10;
//     cout << "The of x in function is " << x << endl; // 20
//     return x;
// }

int main()
{
    int x = 10; //utsav 10 
    // int &chintu=utsav;
    // int &y=x;
    cout<<"The value of x is "<<x<<endl; //10
    updatex(x);
    cout<<"The value of x after function call is "<<x<<endl;    //20


    return 0;
}