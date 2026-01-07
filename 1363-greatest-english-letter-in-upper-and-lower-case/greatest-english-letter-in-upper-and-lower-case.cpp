class Solution {
public:
    string greatestLetter(string s) {
        vector<char> ans;
        string fans;
        
        for (int i = 0; i < s.length(); i++) {  
            for(int j = i + 1; j < s.length(); j++)
            {
                if(s[i] == s[j] - 'a' + 'A' && s[i] >= 'A' && s[i] <= 'Z')
                {
                    ans.push_back(s[i]);
                }
                else if(s[i] >= 'a' && s[i] <= 'z' && s[i] == s[j] - 'A' + 'a')
                {
                    ans.push_back(s[i] - 'a' + 'A');  
                }
            }
        }
        
        if(ans.empty()) return ""; 
        
        
        char maxChar = ans[0];
        for(auto x : ans)
        {
            if(x > maxChar)
            {
                maxChar = x;
            }
        }
        
        return string(1, maxChar);
    }
};