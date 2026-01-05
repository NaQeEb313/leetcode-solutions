class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;  // handle empty array

        int count = 0;       // current consecutive ones
        int maxCount = 0;    // maximum consecutive ones found

        for(int i = 0; i < n; i++) {
            if(nums[i] == 1) {
                count++;
            } else {
                count = 0;  // reset when 0 appears
            }
            if(count > maxCount) maxCount = count;
        }

        return maxCount;
    }
};
