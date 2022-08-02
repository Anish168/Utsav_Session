#include <iostream>
using namespace std;

// sum(int utsav[],int n)
void sum(int arr[],int n)   
{  
    for (int i = 0; i < n; i++)
    {
        arr[i]=arr[i]+1;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};    // 2 3 4 5 6
    int n = sizeof(arr) / sizeof(int);

    cout << "Before Function Calling Array will be " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";  //1 2 3 4 5
    }
    cout << endl;

    sum(arr, n);

    cout << "After Function Calling Array will be " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";  //2 3 4 5 6
    }
    cout << endl;

    return 0;
}