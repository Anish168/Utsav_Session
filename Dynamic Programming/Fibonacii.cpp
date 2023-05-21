#include <iostream>
using namespace std;
// Step1:- Simple recursion solution likho
int fibo(int n)
{
    // bas ecase
    if (n == 0 || n == 1)
    {
        return n;
    }

    // recursive case
    return fibo(n - 1) + fibo(n - 2);
}

// Step 2: TOP down
//  step 2.1:- create dp array and pass it to the function
//  step 2.2:- return krne se phle store kro dp array m
//  step 2.3:- calaculate krne se phle check kro ki khi ushki value alredy calculated toh nhi h
int fiboMem(int n, int *dp)
{
    // base case
    if (n == 0 || n == 1)
    {
        return dp[n] = n;
    }

    // check
    if (dp[n] != -1)
    {
        return dp[n];
    }

    // recursive case
    return dp[n] = fibo(n - 1) + fibo(n - 2);
}

// step 3: Bottom up
//  stpe 3.1:- create dp array but inside the fucntion
//  step 3.2:- analysi base cases of recursive code i.e jo base case ka recursive solution hoga
//  wo bottom up m intilization conditon bn jyga
//  step 3.3:- Reverse the range of changing variable and copy paste the logic of recursion solution

int fiboTab(int nth)
{
    int *dp = new int[nth + 1];
    dp[0] = 0;
    dp[1] = 1;

    for (int n = 2; n <= nth; n++)
    {
        dp[n] = dp[n - 1] + dp[n - 2];
    }
    return dp[nth];
}

// Step 4:- Space optimization
int solveSO(int nth)
{
    int prev2 = 0;
    int prev1 = 1;
    int curr;
    for (int n = 2; n <= nth; n++)
    {
        curr = prev1 + prev2;
        //after calculating
        prev2 = prev1;
        prev1 = curr;
    }
    return curr;
}
int main()
{
    int n;
    cin >> n;
    cout << "Fibonacci by using simple recursion:- " << fibo(n) << endl;

    int *arr = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        arr[i] = -1; //-1 denote abhi ush index pr value calculte nhi hui h
    }
    cout << "Fibonacci by using top down approach :- " << fiboMem(n, arr) << endl;
    cout << "Fibonacci by using Bottom up approach :- " << fiboTab(n) << endl;
    cout << "Fibonacci by using Space optimization :- " << solveSO(n) << endl;

    return 0;
}