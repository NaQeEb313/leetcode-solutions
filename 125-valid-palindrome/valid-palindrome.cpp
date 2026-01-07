class Solution {
public:
    string validchar(string s)
    {
        string valid;
        for(auto x:s)
            {
                if(x>='A'&&x<='Z'||x>='a'&&x<='z'||x>='0'&&x<='9')
                {
                    valid.push_back(x);
                }
                else
                {
                    continue;
                }
            }
        return valid;
    }
    void to_lower(string &valid)
    {
        for(auto &x:valid)
            {if(x>='A'&&x<='Z')
        {
            x=x-'A'+'a';
        }
            }

        
        
    }

    
    bool isPalindrome(string str) {
        string valid= validchar(str);
        to_lower(valid);
        int s=0, e=valid.length()-1;

        while(s<e)
            {
                if(valid[s]!=valid[e])
                {
                    return false;
                    break;
                }
                s++;
                e--;
            }
        return true;
        
    }
};