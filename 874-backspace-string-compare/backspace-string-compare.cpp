class Solution {
public:
   
    bool backspaceCompare(string s, string t) {

       string ss,tt;

        for(auto x:s)
        {
            if(x!='#' && !s.empty())
            {
                ss.push_back(x);
            }
            else if(x=='#')
            {
                if(!ss.empty())
                ss.pop_back();

                else continue;

            }
        }

        for(auto x:t)
        {
            if(x!='#' && !t.empty())
            {
                tt.push_back(x);
            }
            else if(x=='#')
            {
                if(!tt.empty())
                tt.pop_back();

                else continue;
            }
        }

        if(ss==tt) return true;

        else return false;
        
    }
};