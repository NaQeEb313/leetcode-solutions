class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<bool>valid(letters.size(),true);
        int n=letters.size();
    char z1='z'+1;
        for(int i=0;i<n;i++)
            {
                if(letters[i]<=target)
                {
                    valid[i]=false;
                }
                if(valid[i]&&letters[i]<z1)
                {
                    z1=letters[i];
                }
            }
        if(z1=='z'+1)
        {
            return letters[0];
        }
        return z1;
    }
};