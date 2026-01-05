class Solution {
public:
    int  mirrorDistance(int n) {
        double sum=0;
        int a=n;
        vector<int>digits;
       while(n>0)
       { 
        int digit=n%10;
        digits.push_back(digit);
        n=n/10;
        
    
       }
       
       int n1=digits.size()-1;
       for(auto x:digits)
       {
            sum=sum+(x*pow(10,n1));
            n1--;
       }
        
    return (int)abs(a-sum);
    }
};