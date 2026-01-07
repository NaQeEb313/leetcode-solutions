class Solution {
public:
    int countDigits(int num) {
        
        int a=num,count=0;
        while(num>=1)
            {
                int digit =0;
              digit=num%10;
                num=num/10;
                if(a%digit==0)
                {
                    count++;
                }
                    
                
            }
    
        
        return count;
    }
};