// User function template for C++
class Solution
{
public:
    // Function returns the second
    // largest elements
    int print2largest(int arr[], int n)
    {
        // code here
        int slargest = -1;
        int largest = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > largest)
            {
                slargest = largest;
                largest = arr[i];
            }

            if (arr[i] < largest && slargest < arr[i])
            {
                slargest = arr[i];
            }
        }
        return slargest;
    }
};