class Solution {
public:
    bool isPerfectSquare(int num) {
        int s=0,e=num-1;

        if(num==1)
        {
            return true;
        }
        while(s<=e)
            {
                long long m=s+((e-s)>>1);
                if(m*m==num)
                {
                    return true;
                }
                else if(m*m<num)
                {
                    s=m+1;
                    
                }
                else
                {
                    e=m-1;
                }
            }
        return false;
        
        
    }
};