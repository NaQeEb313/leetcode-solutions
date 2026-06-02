class Solution {
public:
    string removeDuplicates(string s) {
        string ans;

    if(s.length()==1) return s;
    
        for(auto x:s)
        {
            if(!ans.empty() && ans.back()==x)
            {
                ans.pop_back();
            }

            else
            {
                ans.push_back(x);
            }
        }
        
        return ans;
    }
};