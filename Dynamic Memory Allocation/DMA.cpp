#include <iostream>
using namespace std;
// pointer hmesha stack memory m bnta h....
// new k baad wo heap memory bnta h....
int main()
{
    // SMA
    // int a;
    // a=10;

    // DMA
    // int *ptr = new int;
    // *ptr = 10;
    // cout << *ptr << endl;

    // float *fptr = new float;
    // *fptr = 20.9;
    // cout << *fptr << endl;

    // char *cptr = new char;
    // *cptr = 'A';
    // cout << *cptr << endl;

    // delete ptr;
    // ptr = NULL;

    // Array
    //  SMA
    // int arr[100];
    // for (int i = 0; i < 5; i++)
    // {
    //     // cin>>*(arr +i);
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     // cout<<arr[i];
    //     cout << *(arr + i);
    // }

    // DMA
    // int *arrptr = new int[100];
    int n;
    cin >> n;
    int *arrptr = new int[n];
    for (int i = 0; i < 5; i++)
    {
        // cin>>*(arr +i);
        cin >> arrptr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        // cout<<arr[i];
        cout << *(arrptr + i) << " ";
    }

    delete[] arrptr;
    arrptr = NULL;
    return 0;
}