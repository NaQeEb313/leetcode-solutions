class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }

        else
        {
            vector<int>ans;
            int s=0;
            while(x>=1)
                {
            ans.push_back(x%10);
            x=x/10;
                }
            int e=ans.size()-1;

            while(s<e)
                {
                    if(ans[s]!=ans[e])
                    {
                     
                        return false;
                        break;
                    }
                    s++;
                    e--;
                }
        }
        return true;
    }
};