#include <iostream>
using namespace std;
// int fibo(int pos)
// {
//     // base case
//     if (pos == 0 || pos == 1)
//     {
//         return pos;
//     }

//     // recursive case
//     int chotans = fibo(pos - 1);
//     int chotans2 = fibo(pos - 2);

//     // with the help of .....
//     int finalans = chotans + chotans2;
//     return finalans;
// }
int fibo(int pos)
{
    // base case
    // if (pos == 0 || pos == 1)
    // {
    //     return pos;
    // }

    // recursive case
    return 3 + fibo(pos - 2);
}
int main()
{
    int pos;
    cin >> pos; // 4
    cout << fibo(pos) << endl;
    return 0;
}