#include <iostream>
using namespace std;
void toh(int n, char src, char helper, char dest)
{
    // base case
    if (n == 0)
    {
        return;
    }

    // recursive case
    toh(n - 1, src, dest, helper);                                              // phle 1,2 disk recursion dalega
    cout << "Move the disk " << n << " from " << src << " to " << dest << endl; // mai 3rd no. wale disk ko ushke destination pr dalunga
    toh(n - 1, helper, src, dest);                                              // ab recursion 1,2 ko apne destination pr dalega
}
int main()
{
    int n;
    cin >> n;
    toh(n, 'A', 'B', 'C');
    return 0;
}