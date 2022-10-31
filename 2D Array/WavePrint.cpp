//                              It's        Linear          Search

#include<iostream>
using namespace std;
int main()
{
    //userinput array
    //at max you can give 2D array of size of arr[1000][1000]
    int arr[100][100];
    int rows,cols;
    cin>>rows>>cols;            //rows = 3 and cols = 3 
    for(int r=0; r<rows; r++)
    {
        for(int c=0; c<cols; c++)
        {
            cin>>arr[r][c];
        }
    }


    for(int c=0; c<cols; c++)       //c=0 0<3---c=1 1<3 ----c=2 2<3
    {
        if (c%2==0)                 //0%2==0 true  1%2==0 false  2%2==0 true
        {
            for(int r=0; r<rows; r++)   //r=0 rows= 2
            {
                cout<<arr[r][c]<<" ";        //0 0 - 1 0 - 2 0-------0 2 - 1 2 - 2 2 
            }
        }
        else
        {
            for(int r=rows-1; r>=0; r--)
            {
                cout<<arr[r][c]<<" ";        //r=2 2 1 - 1 1 - 0 1
            }
        }
        cout<<endl;
        
        
    }

    return 0;


}