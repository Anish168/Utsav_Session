class Solution {
public:
    bool solve(vector<int>&quantity, map<int,int>&cnt, int indx)
    {
        //base case
        if(indx == quantity.size())
        {
            return true;
        }
        
        //recursive case
        for(auto it = cnt.begin(); it != cnt.end(); it++)
        {
            if(it->second >= quantity[indx])
            {
                it->second = it->second - quantity[indx];
                bool aagekaans = solve(quantity,cnt,indx+1);
                if(aagekaans == true)
                {
                    return true;
                }
                
                //backtrack
                it->second = it->second + quantity[indx];
            }
        }
        return false;
    }
    bool canDistribute(vector<int>& nums, vector<int>& quantity) {
        
        map<int,int>cnt;
        
        //Step 1:- create map from array
        for(int i = 0; i < nums.size(); i++)
        {
            cnt[nums[i]]++;
        }
        
        //step 2:- Sort quantity in decreasing order
        sort(quantity.begin(),quantity.end(),greater<int>());
        
        bool ans = solve(quantity,cnt,0);
        return ans;
    }
};