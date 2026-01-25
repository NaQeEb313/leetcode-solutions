class Solution {
public:
    vector<int> dp;

    int solve(int i, int n) {
        if (i == n) return 1;   // reached top
        if (i > n) return 0;    // crossed top

        if (dp[i] != -1) return dp[i];

        return dp[i] = solve(i + 1, n) + solve(i + 2, n);
    }

    int climbStairs(int n) {
        dp.assign(n + 1, -1);
        return solve(0, n);
    }
};
