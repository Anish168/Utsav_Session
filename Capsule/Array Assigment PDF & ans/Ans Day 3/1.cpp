class Solution
{
public:
    // Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c)
    {
        // code here
        int sr = 0;
        int er = r - 1;

        int sc = 0;
        int ec = c - 1;

        vector<int> ans;
        while (sr <= er && sc <= ec)
        {
            for (int j = sc; j <= ec; j++)
            {
                ans.push_back(matrix[sr][j]);
            }
            sr++;

            for (int j = sr; j <= er; j++)
            {
                ans.push_back(matrix[j][ec]);
            }
            ec--;

            if (sr <= er)
            {
                for (int j = ec; j >= sc; j--)
                {
                    ans.push_back(matrix[er][j]);
                }
                er--;
            }

            if (sc <= ec)
            {
                for (int j = er; j >= sr; j--)
                {
                    ans.push_back(matrix[j][sc]);
                }
                sc++;
            }
        }

        return ans;

        // vector<int>ans;
        // if(matrix.size()==0){
        //     return ans;
        // }
        // int sr=0;int er=r-1;
        // int sc=0;int ec=c-1;
        // while(sr<=er&&sc<=ec){
        //     for(int i =sc;i<=ec;i++){
        //         ans.push_back(matrix[sr][i]);
        //     }
        //     sr++;
        //     for(int i =sr;i<=er;i++){
        //         ans.push_back(matrix[i][ec]);
        //     }
        //     ec--;
        //     if(sr<=er)  //ek conditon yha bhi lgao
        //     {
        //         for(int i =ec;i>=sc;i--){
        //             ans.push_back(matrix[er][i]);
        //         }
        //     }
        //     er--;
        //     if(sc<=ec)  //ek condtion lagani h yha
        //     {
        //         for(int i=er;i>=sr;i--){
        //         ans.push_back(matrix[i][sc]);
        //         }
        //         sc++;
        //     }

        // }
        // return ans;
    }
};