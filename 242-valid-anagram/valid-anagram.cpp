class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>freqt(26,0),freqs(26,0);
        if(s.length()!=t.length())
        {
            return false;
        }
        for(auto x:s)
        {
            freqs[x-'a']++;
        }
        for(auto x:t)
        {
            freqt[x-'a']++;
            
        }
        for(int i=0;i<26;i++)
        {
            if(freqs[i]!=freqt[i])
            {
                return false;
                break;
            }
        }
        return true;
    }
};