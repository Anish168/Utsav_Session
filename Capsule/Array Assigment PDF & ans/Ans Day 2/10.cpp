class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();

        // int arrRow[500];
        // int arrCol[500];
        //         jab array ki sized fixed na ho or ek value se intilize krni ho toh fill function ka use kr skte h
        bool arrRow[row];
        fill(arrRow, arrRow + row, true);
        bool arrCol[col];
        fill(arrCol, arrCol + col, true);

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (matrix[i][j] == 0)
                {
                    arrRow[i] = 0; // yha tumne 1 dala hua h code m bhiya
                    arrCol[j] = 0;
                }
            }
        }

        for (int i = 0; i < row; i++)
        {
            if (arrRow[i] == 0)
            {
                for (int j = 0; j < col; j++)
                {
                    matrix[i][j] = {0};
                }
            }
        }

        for (int i = 0; i < col; i++)
        {
            if (arrCol[i] == 0)
            {
                for (int j = 0; j < row; j++)
                {
                    matrix[j][i] = {0};
                }
            }
        }
    }
};