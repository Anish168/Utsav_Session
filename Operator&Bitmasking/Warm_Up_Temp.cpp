#include <iostream>
using namespace std;
int main()
{
    int init, final, steps;
    cin >> init >> final >> steps;

    for (int fahren = init; fahren <= final; fahren = fahren + steps)
    {
        int c = (5 / 9.0) * (fahren - 32);
        cout << fahren << "\t" << c << endl;
    }

    return 0;
}