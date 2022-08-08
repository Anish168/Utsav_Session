#include <iostream>
using namespace std;

bool isvalid(int arr[], int n, int k, int mid)
{
    int student = 1;
    int pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (pages + arr[i] <= mid) // maximum hum mid se zada load nhi denge students pr
        {
            pages = pages + arr[i]; // number of pages maine kitne allocate kiye h abhi
        }
        else
        {
            student++;
            pages = 0;
            if (arr[i] > mid || student > k) // agar student k se bdh gya toh hum allocate nhi kr paye ush mid k lie
            {
                return false;
            }

            pages = pages + arr[i]; // next student ko kitne page allocate hue h
        }
    }
    return true;
}
int allocation(int arr[], int n, int k)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int end = sum;
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (isvalid(arr, n, k, mid))
        {
            // agar hum allocate kr pa rhe h toh ans store krte h
            ans = mid;
            // ab hum ish mid k liye allocate kr pa rhe h toh ishke bde value k liye bhi kr payenge
            end = mid - 1;
        }
        else
        {
            // hum allocate nhi kr paye toh ishke chote k liye bhi nhbi kr skte
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[100];
    int n; // no of pages or books
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k; // no of students

    cout << "The minimum no. of book you can allocate is " << allocation(arr, n, k) << endl;

    return 0;
}