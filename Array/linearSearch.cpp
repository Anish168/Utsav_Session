#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Happy we are here at " << i << endl;
            break;
        }
    }

    if (i == n)
    {
        cout << "Sad not present." << endl;
    }
    return 0;
}