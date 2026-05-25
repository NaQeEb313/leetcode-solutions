class Solution {
public:

    bool isValid(string s) {
        int i=0;
        stack<char>valid;

        if(s.size()&1)return false;
         
        while(i < s.size())
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                valid.push(s[i]);
            }

            else
{
            if(valid.empty()) return false;

           else if(s[i]==')' && valid.top()=='(')
            {
               valid.pop();  
            }

            else if(s[i]=='}' && valid.top()=='{')
            {
                valid.pop();  
            }

            else if(s[i]==']' && valid.top()=='[')
            {
                valid.pop();  
            }

            else return false;
            
}
i++;
        }

        if(valid.empty()) return true;

        else return false;
        
    }
};