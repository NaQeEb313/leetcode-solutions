class Solution {
public:
    bool possible(vector<int>& nums, int n, int k, int m) {
        int pagesum = 0, student = 1;
        for (int i = 0; i < n; i++) {
            if (pagesum + nums[i] <= m) {
                pagesum += nums[i];
            } else {
                student++;
                pagesum = nums[i];
                if (student > k || nums[i] > m) {
                    return false;
                }
            }
        }
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int s = 0, m, sum = 0, ans = -1, e;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        e = sum;

        while (s <= e) {
            m = (s + e) / 2;
            if (possible(nums, n, k, m)) {
                ans = m;
                e = m - 1;
            } else {
                s = m + 1;
            }
        }
        return ans;
    }

    int max_page(vector<int>& nums, int k) {
        int sum = 0, max_sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (sum + nums[i] < splitArray(nums, k)) {
                sum += nums[i];
                if (sum > max_sum) {
                    max_sum = sum;
                }
            } else {
                sum = 0;
            }
        }
        return max_sum;
    }
};