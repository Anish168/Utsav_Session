// User function template for C++
class Solution
{
public:
    void rearrange(int arr[], int n)
    {
        // code here

        vector<int> pos;
        vector<int> neg;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 0)
            {
                pos.push_back(arr[i]);
            }
            else
                neg.push_back(arr[i]);
        }
        int posSize = pos.size();
        int negSize = neg.size();
        int i = 0, j = 0, k = 0;

        while (i < posSize && j < negSize)
        {
            arr[k++] = pos[i++];
            arr[k++] = neg[j++];
        }

        while (i < posSize)
        {
            arr[k++] = pos[i++];
        }

        while (j < negSize)
        {
            arr[k++] = neg[j++];
        }
        // 	  vector<int> ans(n,0);
        //     // positive elements start from 0 and negative from 1.
        //       int posIndex = 0, negIndex = 1;
        //         for(int i = 0;i<n;i++){

        //           // Fill negative elements in odd indices and inc by 2.
        //           if(A[i]<0){
        //               ans[negIndex] = A[i];
        //               negIndex+=2;
        //           }

        //           // Fill positive elements in even indices and inc by 2.
        //           else{
        //               ans[posIndex] = A[i];
        //               posIndex+=2;
        //           }
    }
};