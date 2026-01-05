class Solution {
public:
    bool isSubsequence(string s, string t) {
        vector<bool>present(s.length(),false);
        int i=0;
        for(auto x:t)
        {
            if(i<s.length()&&x==s[i])
            {
                present[i]=true;
                i++;
            }
        }
        for(auto x:present)
        {
            if(!x)
            {
                return false;
            }
        }
        return true;
        
    }
};