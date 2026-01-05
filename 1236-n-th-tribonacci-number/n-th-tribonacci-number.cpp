class Solution {
public:
    vector<int> tribo;

    Solution() {
        tribo.assign(38, -1);   
    }

    int tribonacci(int n) {
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;

        if (tribo[n] != -1) {   
            return tribo[n];
        }

        tribo[n] = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
        return tribo[n];
    }
};
