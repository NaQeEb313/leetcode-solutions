class Solution {
public:
    int reverse(int x) {
        int count = 0;
        long sum = 0;
        vector<int> ans;

        if (x == 0) return 0;

        int s = (x < 0 ? -1 : 1);
        long t = x;
        t = abs(t);
        x = t;

        while (x >= 1)
        {
            count++;
            ans.push_back(x % 10);
            x = x / 10;
        }

        int a = count;
        for (int i = 0; i < count; i++)
        {
            sum = sum + ans[i] * pow(10, a - 1);
            a--;
        }

        if (sum > INT_MAX) return 0;

        return sum * s;
    }
};