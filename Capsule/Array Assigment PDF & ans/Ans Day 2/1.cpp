class Solution
{
public:
    int lenOfLongSubarr(int A[], int N, int K)
    {
        // Complete the function
        // int len = 0;
        // for(int i = 0; i< N; i++)
        // {
        //     int sum = 0;
        //     for(int j = i; j < N; j++)
        //     {
        //         sum += A[j];
        //         if(sum == K)
        //         {
        //             len = max(len, j - i + 1);
        //         }
        //     }
        // }
        // return len;

        // by using hashing
        int prefixSum = 0;
        map<int, int> prefixMap;
        int len = 0;
        for (int i = 0; i < N; i++)
        {
            prefixSum += A[i];
            if (prefixSum == K)
            {
                len = max(len, i + 1);
            }

            int rem = prefixSum - K;
            if (prefixMap.find(rem) != prefixMap.end())
            {
                int maxlen = i - prefixMap[rem];
                len = max(len, maxlen);
            }
            if (prefixMap.find(prefixSum) == prefixMap.end())
            {
                prefixMap[prefixSum] = i;
            }
        }
        return len;
    }
};