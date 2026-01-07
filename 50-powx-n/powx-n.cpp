class Solution {
public:
    double myPow(double a, int n) {
        double result=1;
       long long n1=n;
      n1=llabs(n);
        while(n1>0)
        {
            if(n1&1)
            {
                 result=result*a;
            }
            a=a*a;
            n1=n1>>1;
        }
        if(n>=0)
        return result;

        else return 1/result;
    }
};