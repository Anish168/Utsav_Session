class Solution 
{
    public:
    bool knows(vector<vector<int> >& M, int a,int b)
    {
        if(M[a][b] == 1)
        {
            return true;
        }
        return false;
    }
    
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int>s;
        vector<int>v;
        //step 1: put all element in the stack
        for(int i = 0; i<n; i++)
        {
            s.push(i);
        }
        
        //step 2:  do do element nikalo and compare them until stack m 1 element reh nhi jata
        while(s.size() != 1)
        {
            int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
            
            if(knows(M,a,b))
            {
                s.push(b);
            }
            else
            {
                s.push(a);
            }
        }
        
        //Step 3: verify
        int candidate = s.top();    //1
        s.pop();
        bool rowCheck = false;
        int zeroCount = 0;
        for(int i = 0; i<n; i++)
        {
            if(M[candidate][i] == 0)
            {
                zeroCount++;
            }
        }
        
        if(zeroCount == n)
        {
            rowCheck = true;
        }
        
        bool colCheck = false;
        int oneCount = 0;
        for(int i = 0; i<n; i++)
        {
            if(M[i][candidate] == 1)
            {
                oneCount++;
            }
        }
        
        if(oneCount == n-1)
        {
            colCheck = true;
        }
        
        if(rowCheck == true && colCheck == true)
        {
            return candidate;
        }
        return -1;
        
    }
};