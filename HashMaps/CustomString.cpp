 map<char,int>mp;
        string ans="";
        for(auto x: s)
        {
            mp[x]++;
        }
        
        for(auto x: order)
        {
            if(mp.find(x)!=mp.end())
            {
                auto temp = mp.find(x);
                int count = temp->second;
                string s1(count, temp->first);
                ans=ans+s1;
                mp.erase(x);
            }
        }
        
        for(auto y: mp)
        {
            string s1(y.second,y.first);
            ans+=s1;
        }
        return ans;
    }