1.) 
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &mat, int X)
    {
        int n = mat.size();
        int m = mat[0].size();
        int i = 0;
        int j = m - 1;
        while (i >= 0 && i < n && j >= 0 && j < m)
        {
            if (mat[i][j] == X)
            {
                return 1;
            }
            else if (mat[i][j] > X)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return 0;
    }
};

2.)

Try it yourself


5.)
 class Solution
{
public:
    int mySqrt(int x)
    {
        int ans = sqrt(x);
        return ans;
    }
};

6.)
// User function Template for C++

class Solution
{
public:
    bool canWePlace(vector<int> &stalls, int dist, int cows)
    {
        int n = stalls.size(); // size of array
        int cntCows = 1;       // no. of cows placed
        int last = stalls[0];  // position of last placed cow.
        for (int i = 1; i < n; i++)
        {
            if (stalls[i] - last >= dist)
            {
                cntCows++;        // place next cow.
                last = stalls[i]; // update the last location.
            }
            if (cntCows >= cows)
                return true;
        }
        return false;
    }

    int solve(int n, int k, vector<int> &stalls)
    {

        // Write your code here
        // int n = stalls.size(); //size of array
        // sort the stalls[]:
        sort(stalls.begin(), stalls.end());

        int low = 1, high = stalls[n - 1] - stalls[0];
        // apply binary search:
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (canWePlace(stalls, mid, k) == true)
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        return high;
    }
};

7.)

bool isvalid(vector<int> arr, int n, int m,int mid)
{
    int student = 1;
    int pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (pages + arr[i] <= mid)
        {
            pages = pages + arr[i];
        }
        else
        {
            student++;
            if (arr[i] > mid || student > m)
            {
                return false;
            }
            pages = 0;
            pages = pages + arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m)
{
    // Write your code here.
    int start = 0;
    int sum = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int end = sum;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (isvalid(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
}

8.)
//User function Template for C++

class Solution
{
public:
    int reqDays(int arr[], int cap, int N)
    {
        // function to give us required number of days for a certain capacity of a boat
        int remainingCap = cap;
        int days = 1;
        for (int i = 0; i < N; i++)
        {
            if (arr[i] <= remainingCap)
            {
                remainingCap -= arr[i];
            }
            else
            {
                days++;
                remainingCap = cap;
                remainingCap -= arr[i];
            }
        }
        return days;
    }
    int leastWeightCapacity(int arr[], int N, int D)
    {
        // code here
        int sum = 0, maxEle = -1;
        for (int i = 0; i < N; i++)
        {
            sum += arr[i];
            maxEle = max(maxEle, arr[i]);
        }

        int start = maxEle, end = sum;
        int ans;
        while (start <= end)
        {
            int mid = start + (end - start) / 2; // capacity guess kr rhe h
            int d = reqDays(arr, mid, N);
            if (d > D)
            {
                start = mid + 1;
            }
            else
            {
                ans = mid;
                end = mid - 1;
            }
        }
        return ans;
    }
};

9.)
int findMax(vector<int> &v)
{
    int maxi = INT_MIN;
    int n = v.size();
    // find the maximum:
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, v[i]);
    }
    return maxi;
}

int calculateTotalHours(vector<int> &v, int hourly)
{
    int totalH = 0;
    int n = v.size();
    // find total hours:
    for (int i = 0; i < n; i++)
    {
        totalH += ceil((double)(v[i]) / (double)(hourly));
    }
    return totalH;
}

int minimumRateToEatBananas(vector<int> v, int h)
{
    int low = 1, high = findMax(v);

    // apply binary search:
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int totalH = calculateTotalHours(v, mid);
        if (totalH <= h)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}