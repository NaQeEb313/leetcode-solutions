class Solution {
public:
    int reverseBits(int x) {
        vector<int> binary;

      
        for(int i=0;i<32;i++) {
            binary.push_back(x % 2);
            x = x / 2;
        }

        int sum = 0;
        int p = 0;

        
        for (int i = binary.size() - 1; i >= 0; i--) {
            sum = sum + binary[i] * pow(2, p);
            p++;
        }

        return sum;
    }
};
