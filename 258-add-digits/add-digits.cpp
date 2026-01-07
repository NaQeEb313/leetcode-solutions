class Solution {
public:
    int countdigit(int n)
    {int count=0;
        while(n>0)
            {
                
                count++;
                n=n/10;
            }
     return count;
    }
    int addDigits(int num) {
        int ans;
        
        while(countdigit(num)>1)
            {
                int sum=0;
                int digit;
        while(num>0)
            {
                digit=num%10;
                sum=sum+digit;
                num=num/10;
                
            }
                num=sum;
                
            }
        return num;
    }
};