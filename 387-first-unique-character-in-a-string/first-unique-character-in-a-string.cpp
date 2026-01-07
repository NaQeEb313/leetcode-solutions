class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>freq(26,0);
        {
            int ans;
            for(auto x:s)
            {
                freq[x-'a']++;
            }
            int i=0;
            for(auto x:s)
            {
                if(freq[x-'a']==1)
                {
                    return i;
                }
                i++;
            }
            return -1;
        }
        
    }
};