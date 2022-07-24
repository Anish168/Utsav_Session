#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    // int age1=56;
    // int age2=67;
    // int age3=60;
    // int age4=77;
    // int age5=97;

    //syntax
    // datatype arrayname[size]
    //1st type of drclaration
    // int age[5];

    // for(int i=0; i<=4;i++)
    // {
    //     cin>>age[i];
    // }

    //access
    // arrayname[index]
    // age[0]=56;
    // age[1]=67;
    // age[2]=60;
    // age[3]=77;
    // age[4]=97;
    
    // cout<<age[0]<<endl;
    // cout<<age[1]<<endl;
    // cout<<age[2]<<endl;
    // cout<<age[3]<<endl;
    // cout<<age[4]<<endl;


    // for(int i=0; i<=4; i++)
    // {
    //     cout<<age[i]<<endl;
    // }

    //2nd type
    // int age[5]={34,56,76,54,33};
    // for(int i=0; i<=4; i++)
    // {
    //     cout<<age[i]<<endl;
    // }

    //3rd way
    // int age[]={56,67,54,65,76};
    // for(int i=0; i<=4; i++)
    // {
    //     cout<<age[i]<<endl;
    // }
    
    // int age[];  can't do

    // int arr[6]; //only declaration sbse phle garbage value store hogi
    // for(int i=0; i<=4; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }

    // int arr[6]={56,76,45,33,43,23}; //declaration with intialization
    // for(int i=0; i<=4; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }

    int arr[100];
    // int arr[100]={0};
    // int arr[100]={1};
    // arr[0]=22;
    // arr[1]=23;
    for(int i=0; i<=99; i++)
    {
        cout<<arr[i]<<" ";
    }

    



    return 0;
}