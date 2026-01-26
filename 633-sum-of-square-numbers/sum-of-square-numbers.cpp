class Solution {
public:
bool valid=false;
    void solve(int idx,int c,long long s,long long e)
    {
        if(s>e) return;

        if(valid) return;

        if(c==1||c==2)
        {
            valid=true;
            return;
        }
        long long sum=(s*s)+(e*e);
        if(sum==c)
        { 
            valid=true;
            return;
        }
        

       

         if(sum>c)
        { 
            
            solve(idx+1,c,s,e-1);
        }
        else
        {
            solve(idx+1,c,s+1,e);
        }

        
    }
    bool judgeSquareSum(int c) {
        
        solve(0,c,0,(long long)floor(sqrt(c)));

        return valid;

        
    }
};