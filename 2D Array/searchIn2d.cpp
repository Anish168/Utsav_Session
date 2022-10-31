#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int key;
    cin >> key;

    // 1st way of linear search
    //  for (int i = 0; i < 3; i++)
    //  {
    //      for (int j = 0; j < 3; j++)
    //      {
    //          if (arr[i][j] == key)
    //          {
    //              cout << "Hurray Key is present" << endl;
    //              return 0;
    //          }
    //      }
    //  }
    //  cout << "Oops key is not present" << endl;

    // 2nd way
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == key)
            {
                cout << "Hurray Key is present" << endl;
                // break;
            }
        }
        // 1st way bhr aane ka break ek way h
        // 2nd way j ki value 3 se bdi ho jayegi
    }
    if (i == 4)
    {
        cout << "Oops key is not present" << endl;
    }

    return 0;
}