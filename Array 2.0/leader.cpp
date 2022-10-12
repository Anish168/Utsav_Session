#include<iostream>
using namespace std;

int main()
{
    int arr[]={16,17,4,3,5,2};
    int n = 6;
    int k=0;
    int leader[6];
    for (int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                flag=1;
                break;
            }
    
               
        }
        if(flag==0)
        {
              leader[k]=arr[i];
              k++;
        }
      
    }
    for(int p=0;p<k;p++)
    {
        cout<<leader[p]<<" "<<endl;
    }
}
