// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        unordered_set<int>us;
        for(int i = 0; i < n; i++)
        {
            us.insert(a[i]);
        }
        
        int count = 0;
        for(int i = 0; i < m; i++)
        {
            if(us.find(b[i]) != us.end())
            {
                count++;
                us.erase(b[i]);
            }
        }

        return count;
    }
};