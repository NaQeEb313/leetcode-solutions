class Solution {
public:
    void rotate(vector<int>& nums, int k) {
int i=0;
        vector<int> temp(nums.size(),0);
    for(auto x:nums)
        {
            temp[(i+k)%nums.size()]=nums[i];
            i++;
            
        }
        nums.assign(temp.begin(),temp.end());
    }
};