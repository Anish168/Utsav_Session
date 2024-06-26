class Solution
{
public:
    void reverse(vector<int> &arr, int start, int end)
    {
        while (start <= end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int> &arr, int k)
    {
        int n = arr.size();
        if (n == 0)
            return;
        k = k % n;
        if (k > n)
            return;
        //   int temp[100000];
        //   for (int i = n - k; i < n; i++)
        //   {
        //     temp[i - n + k] = arr[i];
        //   }
        //   for (int i = n - k - 1; i >= 0; i--)
        //   {
        //     arr[i + k] = arr[i];
        //   }
        //   for (int i = 0; i < k; i++)
        //   {
        //     arr[i] = temp[i];
        //   }
        reverse(arr, 0, n - k - 1);
        reverse(arr, n - k, n - 1);
        reverse(arr, 0, n - 1);
    }
};