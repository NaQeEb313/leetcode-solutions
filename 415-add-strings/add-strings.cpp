class Solution {
public:

    int num(char c)
    {
        return c -'0';
    }
    char chr(int n)
    {
        return n + '0';
    }

    string addStrings(string num1, string num2) {
        int i1=num1.length()-1,i2=num2.length()-1,n;

        string ans(max(i1+1,i2+1),'0');
        int c=0;

        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());

        

        for(int i=0;i<max(i1+1,i2+1);i++)
        {
            int d1=(i<i1+1)?num(num1[i]):0;
            int d2=(i<i2+1)?num(num2[i]):0;
            n=d1 + d2 + c;
            ans[i]=chr(n%10);
            n=n/10;
            c=n%10;
        }
        if(c) ans.push_back(c+'0');

        

        reverse(ans.begin(),ans.end());

       return ans;


        
    }
};