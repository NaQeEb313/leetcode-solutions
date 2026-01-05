class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int s1,s2;
        
        int n1=word1.size(),n2=word2.size(),i=0,j=0;
        string word3;

        while(i<n1&&j<n2)
        {
            word3.push_back(word1[i]);
            word3.push_back(word2[j]);
            i++;
            j++;
        }
        while(i<n1)
        {
           word3.push_back(word1[i]);
           i++; 
        }
        while(j<n2)
        {
            word3.push_back(word2[j]);
            j++;
        }
        
        
        return word3;
    }
};