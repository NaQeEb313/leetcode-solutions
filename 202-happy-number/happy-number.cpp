class Solution {
public:
    bool ans= false;
    void solve(int n)
    {
        int sum=0;
        if(n==1)
        {
            ans=true;
            return;
        }

        if(n==4)
        {
            ans=false;
            return;
        }

        while(n>0)
            {
                sum=sum+((n%10)*(n%10));
                n=n/10;
            }
        solve(sum);
        

        
    }
    bool isHappy(int n) {
     
        solve(n);
        return ans;
        
    }
};