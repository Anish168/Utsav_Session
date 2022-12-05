#include <iostream>
using namespace std;
int *array(int n)
{
    int *arrptr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arrptr[i];
    }
    return arrptr;
}
int main()
{
    int n;
    cin >> n;
    int *kptr = array(n);
    for (int i = 0; i < n; i++)
    {
        cout << kptr[i] << " ";
    }
    delete kptr;
    kptr = NULL;
    return 0;
}