#include <iostream>
using namespace std;
int multiply(int a, int b)
{
    // base case
    // if (b==1)
    // {
    //     return a;
    // }
    if (b == 0)
    {
        return 0;
    }

    // recurisve case
    return a + multiply(a, b - 1);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Multiply is : " << multiply(a, b) << endl;
    return 0;
}