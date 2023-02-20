class Solution{
  public:
      vector<int>NSR(vector<int>&v)
    {
        stack<int>st;
        vector<int>ans;
        // st.push(n);
        // ans.push_back(n)
        for(int i =v.size()-1; i >= 0; i--)
        {
            while(!st.empty() and v[st.top()] >= v[i])
            {
                st.pop();
            }
            int element = (st.empty()) ? v.size() : st.top();
            ans.push_back(element);
            st.push(i);
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
    
    vector<int>NSL(vector<int>&v)
    {
        stack<int>st;
        vector<int>ans;
        // st.push(n);
        // ans.push_back(n)
        for(int i = 0; i < v.size(); i++)
        {
            while(!st.empty() and v[st.top()] >= v[i])
            {
                st.pop();
            }
            int element = (st.empty()) ? -1 : st.top();
            ans.push_back(element);
            st.push(i);
        }
        return ans;        
    }
  
    int getArea(vector<int>&v)
    {
        int res = 0;
        vector<int>ps = NSL(v);
        vector<int>ns= NSR(v);
        
        for(int i = 0; i < v.size(); i++)
        {
            int curr = (ns[i] - ps[i] - 1)*v[i];
            res = max(curr, res);
        }
        return res;        
    }
  
  
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        vector<int>v;
        int i = 0;
        for(int j = 0; j < m; j++)
        {
            v.push_back(M[i][j]);
        }
        
        int maximum = getArea(v);
        for(i = 1; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(M[i][j] == 0)
                {
                    v[j] = 0;
                }
                else
                {
                    v[j] = v[j] + M[i][j];
                }
            }
            maximum = max(maximum, getArea(v));
        }
        return maximum;
        
    }
};