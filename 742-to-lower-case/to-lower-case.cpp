class Solution {
public:
    string toLowerCase(string s) {
        for(char &x:s)
            {
                if(x>='A'&& x<='Z')
                {                  
                x=x-'A'+'a';
                }
            }
                return s;
            }
        
    
};