class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        vector<int> ans;
        ans.push_back(nums[0]); 

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                ans.push_back(nums[i]);
            }
        }

        nums.assign(ans.begin(), ans.end()); 
        return nums.size();
    }
};