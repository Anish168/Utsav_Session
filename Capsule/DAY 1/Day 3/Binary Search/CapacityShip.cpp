//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  int reqDays(int arr[],int cap,int N)
  {
      //function to give us required number of days for a certain capacity of a boat
      int remainingCap=cap;
      int days=1;
      for(int i=0; i<N; i++)
      {
          if(arr[i]<=remainingCap)
          {
              remainingCap-=arr[i];
              
          }
          else
          {
              days++;
              remainingCap=cap;
              remainingCap-=arr[i];
          }
      }
      return days;
  }
    int leastWeightCapacity(int arr[], int N, int D) {
        // code here
        int sum=0,maxEle=-1;
        for(int i=0; i<N; i++)
        {
            sum+=arr[i];
            maxEle=max(maxEle,arr[i]);
        }
        
        int start=maxEle,end=sum;
        int ans;
        while(start<=end)
        {
            int mid=start+(end-start)/2;    //capacity guess kr rhe h
            int d=reqDays(arr,mid,N);       //no of days required
            if(d>D)
            {
                start=mid+1;
            }
            else
            {
                ans=mid;
                end=mid-1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends