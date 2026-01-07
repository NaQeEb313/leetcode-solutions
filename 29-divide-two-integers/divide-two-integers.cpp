class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN&&divisor==-1)
        {
            return INT_MAX;
        }
        else if(dividend==INT_MAX&&divisor==1)
        {
            return INT_MAX;
        }
        else{

        long count=0;
        long a=dividend,b=divisor;
        a=labs(a);
        b=labs(b);
        
        while(a>=b)
            {
                a=a-b;
                count++;
            }

            
         if((dividend>=0&&divisor<0)||(dividend<0&&divisor>0))
        {
            return -count;
        }
        else
        return count;
    }
    }
};