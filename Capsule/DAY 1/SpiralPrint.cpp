class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
        //transpose phle nikala
        for(int i =0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i<j)
                {
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
        
        // 2nd step is 1st row and last row ko swap krte gye n/2 row tk agar poora krenge toh wps phle jaisa ho jyga
        //last row formula matrix[n-1-i]
        for(int i=0; i<(n/2); i++)
        {
            for(int j=0; j<n; j++)
            {
                swap(matrix[i][j], matrix[n-1-i][j]);
            }
        }
    } 
};