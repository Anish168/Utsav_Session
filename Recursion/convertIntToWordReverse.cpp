#include <iostream>
using namespace std;
string arr[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
void convertinreverse(int n)
{
    //base case
    if (n==0)
    {
        return;
    }
    
    //recursive case
    int rem=n%10;
    cout<<arr[rem]<<" ";
    convertinreverse(n/10);
    
}
void convert(int n)
{
    //base case
    if (n==0)
    {
        return;
    }
    
    //recursive case
    convert(n/10);
    int rem=n%10;
    cout<<arr[rem]<<" ";
    
}
int main()
{
    int n;
    cin>>n; //2048
    convertinreverse(n);
    cout<<endl;
    convert(n);
    return 0;
}