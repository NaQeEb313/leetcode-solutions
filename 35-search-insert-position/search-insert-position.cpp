class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0, m, e = nums.size() - 1, ans = -1;

        for (; s <= e;) {
            m = (s + e) / 2;

            if (nums[m] == target) {
                ans = m;
                break;
            } else if (nums[m] > target) {
                e = m - 1;
            } else {
                s = m + 1;
            }
        }

        if (ans == -1) {
            s = 0, e = nums.size() - 1;
            if(target<nums[0]){
                ans=0;
                
            }
            else if(target>nums[nums.size()-1])
            {
                ans=nums.size();
            }
            else{
                while (s <= e) {
                m = (s + e) / 2;
                if (m + 1 < nums.size() && target < nums[m + 1] && target > nums[m]) {
                    ans = m + 1;
                    break;
                } else if (target < nums[m]) {
                    e = m - 1;
                } else if (target > nums[m]) {
                    s = m + 1;
                } 
            }
                }
        }

        return ans;
    }
};