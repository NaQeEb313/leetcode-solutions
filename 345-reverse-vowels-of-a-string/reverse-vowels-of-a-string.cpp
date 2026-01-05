class Solution {
public:
    bool valid(char s) {
        vector<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        for(char x:vowels) {
            if(x==s) return true;
        }
        return false;
    }

    string reverseVowels(string str) {
        int s=0, e=str.length()-1;
        while(s < e) {
            
            while(s < e && !valid(str[s])) s++;
            
            while(s < e && !valid(str[e])) e--;

            
            if(s < e) {
                swap(str[s], str[e]);
                s++;
                e--;
            }
        }
        return str;
    }
};