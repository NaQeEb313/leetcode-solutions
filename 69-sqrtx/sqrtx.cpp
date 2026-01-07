class Solution {
public:
    int mySqrt(int x) {
        long long s = 0, e = x, m, ans;
        if(x==1)
        {
            return 1;
        }
        else if(x==0)
        {
            return 0;
        }

        while (s <= e) {
            m = (s + e) / 2;

            if ((m * m <= x && (m + 1) * (m + 1) > x)) {
                ans = m;
                break;
            }
            else if (m * m < x) {
                s = m + 1;
            }
            else if (m * m > x) {
                e = m - 1;
            }
        }

        return ans;
    }
};