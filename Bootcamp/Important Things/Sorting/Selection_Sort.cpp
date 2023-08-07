#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(int);
    cout << "Before Sorting ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int pos = 0; pos <= n - 2; pos++)   //pos kaam kr rha h ki kiss position(index) pr dalna h
    {
        int min = pos;  //maine mana jo position pr h wo hi abhi tk ka minimum h

        //sabse minimum find krna ka kaam j wala loop kr rha h
        for (int j = pos + 1; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[pos], arr[min]);
    }

    cout << "After Sorting:- ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}