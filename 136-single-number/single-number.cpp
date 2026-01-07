class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int uxor=0;
        for(int i=0;i<nums.size();i++)
            {
                uxor=uxor^nums[i];
            }

        return uxor;
    }
};