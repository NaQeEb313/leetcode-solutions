class Solution {
public:
    string addBinary(string a, string b) {

      
        int d = a.size() - b.size();
        if (d > 0) b = string(d, '0') + b;
        else a = string(-d, '0') + a;

        
        a = "0" + a;
        b = "0" + b;

        int n = a.size();
        string carry(n, '0');
        carry[n-1] = '0';   

        string sum(n, '0');

        
        for (int i = n-1; i > 0; i--) {
            int A = a[i] - '0';
            int B = b[i] - '0';
            int C = carry[i] - '0';

            int carryVal = (A & B) | (B & C) | (A & C);

            carry[i-1] = carryVal + '0';
        }

        
        for (int i = n-1; i >= 0; i--) {
            int A = a[i] - '0';
            int B = b[i] - '0';
            int C = carry[i] - '0';

            sum[i] = (A ^ B ^ C) + '0';
        }

       
        if (sum[0] == '0') sum.erase(sum.begin());

        return sum;
    }
};
