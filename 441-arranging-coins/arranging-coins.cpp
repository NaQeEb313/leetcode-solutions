class Solution {
public:
    int arrangeCoins(int n) {
        long long  s=1,e=n,m,ans;
        

        while(s<=e)
            {
                m=s+((e-s)>>1);
                
                if(((m*m)+(m))>>1==n)
                {
                    ans=m;
                    return (int)ans;
                }
                else if((((m*m)+(m))>>1)<n)
                {
                    ans=m;
                    s=m+1;
                }
                else
                {
                    e=m-1;
                }
            }

        return (int)ans;
    }
};