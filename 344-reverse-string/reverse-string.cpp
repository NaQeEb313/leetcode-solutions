class Solution {
public:

    void reverse(vector<char>& stri,int s,int e)
    {
        
        if(s>e)
        {
            return;
        }
        
        swap(stri[s],stri[e]);
        s++;
        e--;

       return  reverse(stri, s, e);

        

    }
    void reverseString(vector<char>&str) {
        
reverse(str,0,str.size()-1);
        
    }
};