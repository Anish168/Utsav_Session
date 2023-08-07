#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {1,4,5,6,9,9};
    int element = 19;
    
    vector<int>::iterator itr = lower_bound(arr.begin(),arr.end(),element);//returns iterator
    int index = lower_bound(arr.begin(),arr.end(),element)-arr.begin();//returns index
    
    cout<<"Iterator: "<<itr-arr.begin()<<" Index: "<<index;
    
    return 0;
}