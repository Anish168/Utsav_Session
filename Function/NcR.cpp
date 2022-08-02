#include <iostream>
using namespace std;
int fact(int n)
{
    int ans=1;
    for(int i=2; i<=n; i++)
    {
        ans=ans*i;
    }
    return ans;
}

int ncr(int n, int r)
{
   int ans= fact(n)/(fact(r)*(fact(n-r)));  //120
   return ans;
}
int main()
{
    int n,r;
    cin>>n>>r;
    // cout<< "Factorial is "<<factorial(n)<<endl;
    cout<<"The nCr OF GIVEN VALUES WILL BE "<<ncr(n,r)<<endl;
    return 0;
}