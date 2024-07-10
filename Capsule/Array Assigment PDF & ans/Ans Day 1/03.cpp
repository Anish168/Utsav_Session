// User function template for C++

class Solution
{
public:
    bool arraySortedOrNot(int arr[], int n)
    {
        // code here
        int flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            flag = 0;
            if (arr[i] <= arr[i + 1])
            {
                flag = 1;
            }
            if (flag == 0)
            {
                return false;
            }
        }
        return true;
    }
};