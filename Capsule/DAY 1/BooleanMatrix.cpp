class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int r = matrix.size();
        int c = matrix[0].size();
        bool arrRow[r];
        fill(arrRow, arrRow+r, false);
        bool arrCol[c];
        fill(arrCol, arrCol+c, false);
        
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                if(matrix[i][j]==1)
                {
                    arrRow[i]=1;
                    arrCol[j]=1;
                }
            }
        }
        
        //Row m 1 dal rhe h
        for(int i = 0; i < r; i++)
        {
            if(arrRow[i]==1)
            {
                for(int j = 0; j < c; j++)
                {
                    matrix[i][j] = 1; 
                }
            }
        }
        
        //col m 1 dal rhe h
        for(int i = 0; i< c; i++)
        {
            if(arrCol[i]==1)
            {
                for(int j = 0 ; j < r; j++)
                {
                    matrix[j][i] = 1;
                }
            }
        }
    }
};