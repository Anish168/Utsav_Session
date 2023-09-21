class Solution {
public:
    void solve(int indx, set<string>st, string s, vector<string>&result, string temp)
    {
        //base case
        if(indx == s.length())
        {
            temp.pop_back();
            result.push_back(temp);
            return;
        }
        
        string subString = "";  //substring bna rhi h ki wo substring h ki nhi dict m
        for(int i = indx; i < s.length(); i++)
        {
            subString.push_back(s[i]);
            
            if(st.count(subString))
            {
                //recursive case
                solve(i+1, st, s, result, temp + subString + " ");
            }
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        set<string>st;
        vector<string>result;
        
        for(auto it:wordDict)
        {
            st.insert(it);
        }
        
        string temp = "";
        solve(0,st,s,result,temp);
        return result;
    }
};