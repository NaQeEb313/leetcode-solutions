class Solution {
public:
    string addStrings(string num1, string num2) {

        int n1 = num1.length(), n2 = num2.length();

        // Pad shorter string with leading zeros
        if (n1 > n2) {
            num2.insert(num2.begin(), n1 - n2, '0');
        } else if (n2 > n1) {
            num1.insert(num1.begin(), n2 - n1, '0');
        }

        int carry = 0;
        int n = num1.length();
        string ans(n + 1, '0');

        // Add from right to left
        for (int i = n - 1; i >= 0; i--) {
            int d1 = num1[i] - '0';
            int d2 = num2[i] - '0';

            int sum = d1 + d2 + carry;
            ans[i + 1] = (sum % 10) + '0';
            carry = sum / 10;
        }

        // Handle final carry
        if (carry) {
            ans[0] = carry + '0';
        } else {
            ans.erase(ans.begin()); // remove leading zero
        }

        return ans;
    }
};
