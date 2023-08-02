#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {1,4,5,6,9,9};
    int element = 6;
    
    if(binary_search(arr.begin(),arr.end(),element)) cout<<"True";
    else cout<<"False";
    
    return 0;
}