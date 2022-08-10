#include <iostream>
using namespace std;
void update(int *arr)
{
    for (int i = 0; i < 5; i++)
    {
        arr[i] = arr[i] + 1;
    }
}
int main()
{
    // array is a internal pointer
    int arr[5] = {23, 54, 65, 76, 87};
    // cout << "The name of array is " << arr << "  " << &arr[0] << endl;   //it gives address of first bucket
    // cout << "The name of array is " << arr + 1 << "  " << &arr[1] << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " " << *(arr + i) << endl; // star lga k derefer kiya
    }

    update(arr); //&arr
    cout << "After returning from function " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " " << *(arr + i) << endl;
    }

    return 0;
}