class Solution {
public:
    char tolower(char &ch) 
    {return ch -'A' +'a';}

    char toupper(char &ch) 
    {return ch -'a' +'A';}

    void solve(string s,vector<string>&ans,int i)
    {
        int n=s.length();
        if(i>=n)
        {
            ans.push_back(s);
            return;
        }

        // no change
        solve(s,ans,i+1);

        //change case
        if(s[i]>=65)
        {
            if(s[i]>=65&&s[i]<97)
            {

                s[i]=tolower(s[i]);
                solve(s,ans,i+1);
                s[i]=toupper(s[i]);
            }
            else
            {
                s[i]=toupper(s[i]);
                solve(s,ans,i+1);
                s[i]=tolower(s[i]);

            }
        }


    }

    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        solve(s,ans,0);

        return ans;
    }
};