#include <iostream>
using namespace std;

int main()
{
    // 2D array
    // synatx:- datatype bucketname[rows][cols]
    // 1st way to create 2d array
    // int arr[3][3] = {
    //     {1, 18, 12},
    //     {3, 0, 14},
    //     {8, 9, 10}};

    // maximum size of array in 2D
    // int arr[1000][1000];

    // 1st row
    //  cout<<arr[0][0]<<endl;
    //  cout<<arr[0][1]<<endl;
    //  cout<<arr[0][2]<<endl;

    // //2nd row
    // cout<<arr[1][0]<<endl;
    // cout<<arr[1][1]<<endl;
    // cout<<arr[1][2]<<endl;

    // //3rd row
    // cout<<arr[2][0]<<endl;
    // cout<<arr[2][1]<<endl;
    // cout<<arr[2][2]<<endl;

    // 2nd way print
    // 1st row
    //  for (int j = 0; j < 3; j++)
    //  {
    //      cout<<arr[0][j]<<" ";
    //  }

    // 3rd way to print
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // 2nd way to create an 2d array
    // int arr[100][100];
    // int rows,cols;
    // cin>>rows;
    // cin>>cols;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cin>>arr[i][j];
    //     }

    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // 3rd way to create an array

    // int arr[][3] = {
    //     {1, 18, 12},
    //     {3, 0, 14},
    //     {8, 9, 10}};

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // int arr[] = {23, 45, 67, 89};
    // cout << arr << endl;    //cuz array is a internal pointer

    // In 2D array elements are stored in Linear Form
    // Proving
    int arr[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    cout << arr[0] << endl; // yeh 0th row k 1st element ka address dega;
    cout << arr[1] << endl; // yeh 1th row k 1st element ka address dega;
    cout << arr[2] << endl; // yeh 2th row k 1st element ka address dega;

    return 0;
}