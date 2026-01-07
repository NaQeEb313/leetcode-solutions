class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
vector<int>ans;
        int total=0;
        for(auto x:nums)
            {
                total=x+total;
                ans.push_back(total);
                
            }
        return ans;
    }
};