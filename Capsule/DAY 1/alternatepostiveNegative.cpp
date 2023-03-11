// User function template for C++
class Solution
{
public:
    void rearrange(int arr[], int n)
    {
        // code here
        vector<int> positive, negative;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
            {
                negative.push_back(arr[i]);
            }
            else
            {
                positive.push_back(arr[i]);
            }
        }

        int i = 0, j = 0, k = 0;
        while (i < positive.size() && j < negative.size())
        {
            arr[k] = positive[i];
            k++;
            i++;
            arr[k] = negative[j];
            k++;
            j++;
        }

        while (i < positive.size())
        {
            arr[k] = positive[i];
            k++;
            i++;
        }

        while (j < negative.size())
        {
            arr[k] = negative[j];
            k++;
            j++;
        }
    }
};