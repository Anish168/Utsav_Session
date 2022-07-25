#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 4, 2, 1, 3};    //op 1 2 3 4 5
    int n = sizeof(arr) / sizeof(int);

    cout << "Before Selection Sort " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout<<endl;
    for (int pos = 0; pos <= n - 2; pos++)
    {
        int min = pos;
        for (int j = pos + 1; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[pos], arr[min]);
    }
    cout << "After Selection Sort " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}