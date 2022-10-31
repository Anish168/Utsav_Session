#include <iostream>
using namespace std;
// int factorial(int n)
// {
//     // base case
//     if (n == 0)
//     {
//         return 1;
//     }

//     // recursive case
//     int chotans = factorial(n - 1); // pure assumption jo bhi ans dega recusrion shi hi dega
//     int chotans2 = n * chotans;
//     // with the help of above two steps we calc final ans;
//     return chotans2;
// }
int factorial(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }

    // recursive case
    // pure assumption jo bhi ans dega recusrion shi hi dega
    return n * factorial(n - 1);
    // with the help of above two steps we calc final ans;
}
int main()
{
    int n;
    cin >> n; // 5
    cout << factorial(n) << endl;
    return 0;
}