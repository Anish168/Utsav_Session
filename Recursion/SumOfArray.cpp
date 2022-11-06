#include <iostream>
using namespace std;
int sumArray(int arr[], int n)
{
    // base case
    if (n==1)
    {
        return arr[0];
    }
    

    // recursive case
   return arr[0] + sumArray(arr + 1, n - 1);
}
int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Sum is: "<<sumArray(arr, n);

    return 0;
}