class Solution{
        int solve(string a, string b)
        {
            vector<int>curr(b.length() + 1, 0);
            vector<int>next(b.length() + 1, 0);

            for(int i = a.length() - 1; i >= 0; i--)
            {
                for(int j = b.length() - 1; j >= 0; j--)
                {
                    int ans = 0;
                    if(a[i] == b[j])
                    {
                        ans = 1 + next[j+1];
                    }
                    else
                    {
                        int op1 = next[j];
                        int op2 = curr[j + 1];
                        ans = max(op1, op2);
                    }
                    curr[j] = ans;
                }
                next = curr;
            }
            return curr[0];
        }		

	public:
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    int l1 = solve(str1, str2);
	    int diff = str1.size() - l1;
	    int diff2 = str2.size() - l1;
	    return diff + diff2;
	} 
};