class Solution {
public:
    bool isPowerOfThree(int a) {
        if(a<=0) return false;
        if(a==1) return true;
        if(a%3!=0) return false;

       
       return isPowerOfThree(a/3);
        
        

       
        
    }
};