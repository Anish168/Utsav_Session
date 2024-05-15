1.)
int start = 0;
int end = nums.size() - 1;
while (start <= end)
{
    int mid = start + (end - start) / 2;
    if (nums[mid] == target)
    {
        return mid;
    }
    else if (target > nums[mid])
    {
        start = mid + 1;
    }
    else
    {
        end = mid - 1;
    }
}
return start;

2.)

class Solution
{
public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> arr, long long n, long long x)
    {

        // Your code here
        int start = 0;
        int end = n - 1;
        int res = -1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (x == arr[mid])
            {
                return mid;
            }
            else if (x > arr[mid])
            {
                res = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return res;
    }
};

4.)
class Solution
{
public:
    vector<int> searchRange(vector<int> &arr, int x)
    {
        vector<int> v;
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        int ans = -1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (x == arr[mid])
            {
                ans = mid;
                end = mid - 1;
            }
            else if (arr[mid] > x)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        v.push_back(ans);

        start = 0;
        end = n - 1;
        ans = -1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (x == arr[mid])
            {
                ans = mid;
                start = mid + 1;
            }
            else if (arr[mid] > x)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        v.push_back(ans);
        return v;
    }
};

5.)
//User function template for C++
class Solution
{
public:
    /* if x is present in arr[] then returns the count
        of occurrences of x, otherwise returns 0. */
    int firstOccurrence(int arr[], int n, int k)
    {
        int low = 0, high = n - 1;
        int first = -1;

        while (low <= high)
        {
            int mid = (low + high) / 2;
            // maybe an answer
            if (arr[mid] == k)
            {
                first = mid;
                // look for smaller index on the left
                high = mid - 1;
            }
            else if (arr[mid] < k)
            {
                low = mid + 1; // look on the right
            }
            else
            {
                high = mid - 1; // look on the left
            }
        }
        return first;
    }

    int lastOccurrence(int arr[], int n, int k)
    {
        int low = 0, high = n - 1;
        int last = -1;

        while (low <= high)
        {
            int mid = (low + high) / 2;
            // maybe an answer
            if (arr[mid] == k)
            {
                last = mid;
                // look for larger index on the right
                low = mid + 1;
            }
            else if (arr[mid] < k)
            {
                low = mid + 1; // look on the right
            }
            else
            {
                high = mid - 1; // look on the left
            }
        }
        return last;
    }

    pair<int, int> firstAndLastPosition(int arr[], int n, int k)
    {
        int first = firstOccurrence(arr, n, k);
        if (first == -1)
            return {-1, -1};
        int last = lastOccurrence(arr, n, k);
        return {first, last};
    }

    int count(int arr[], int n, int x)
    {
        // code here
        pair<int, int> ans = firstAndLastPosition(arr, n, x);
        if (ans.first == -1)
            return 0;
        return (ans.second - ans.first + 1);
    }
};

6.)
class Solution
{
public:
    int search(vector<int> &arr, int k)
    {
        int n = arr.size();
        int low = 0, high = n - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;

            // if mid points the target
            if (arr[mid] == k)
                return mid;

            // if left part is sorted:
            if (arr[low] <= arr[mid])
            {
                if (arr[low] <= k && k <= arr[mid])
                {
                    // element exists:
                    high = mid - 1;
                }
                else
                {
                    // element does not exist:
                    low = mid + 1;
                }
            }
            else
            { // if right part is sorted:
                if (arr[mid] <= k && k <= arr[high])
                {
                    // element exists:
                    low = mid + 1;
                }
                else
                {
                    // element does not exist:
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};

7.)
class Solution
{
public:
    bool search(vector<int> &arr, int k)
    {
        int n = arr.size(); // size of the array.
        int low = 0, high = n - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;

            // if mid points the target
            if (arr[mid] == k)
                return true;

            // Edge case:
            if (arr[low] == arr[mid] && arr[mid] == arr[high])
            {
                low = low + 1;
                high = high - 1;
                continue;
            }

            // if left part is sorted:
            if (arr[low] <= arr[mid])
            {
                if (arr[low] <= k && k <= arr[mid])
                {
                    // element exists:
                    high = mid - 1;
                }
                else
                {
                    // element does not exist:
                    low = mid + 1;
                }
            }
            else
            { // if right part is sorted:
                if (arr[mid] <= k && k <= arr[high])
                {
                    // element exists:
                    low = mid + 1;
                }
                else
                {
                    // element does not exist:
                    high = mid - 1;
                }
            }
        }
        return false;
    }
};

10.)
class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            ans = ans ^ nums[i];
        }
        return ans;
    }
};

11.)
class Solution
{
public:
    int pivotIndex(vector<int> &arr)
    {
        int start = 0;
        int end = arr.size() - 1;
        while (start < end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] < arr[0])
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
        }

        return start;
    }
};
