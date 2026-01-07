class Solution {
public:
    bool isPowerOfTwo(int n) {
        double x;
        if(n<=0)
        {
            return false;
        }
        if(n==2147483647)
        {
            return false;
        }
        x=log(n)/log(2);
        double tolerance=1e-9;
        
        if(fabs(x-round(x))<tolerance)
        {
            return true;
        }
        else
         return false;
        
        
        
    }
};