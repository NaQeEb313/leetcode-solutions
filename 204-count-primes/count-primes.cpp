class Solution {
public:



    int countPrimes(int n) {
       
       vector<bool>isprime(n+1,true);
        isprime[0]=isprime[1]=false;
        int count=0;
    
        for(int i=2;i<n;i++)
        {
            if(isprime[i])
            {
                count++;
            for(int j=1;i*j<n;j++)
            {
                isprime[i*j]=false;
                
            }
            }

        }
         return count;
        }
       
    
};
