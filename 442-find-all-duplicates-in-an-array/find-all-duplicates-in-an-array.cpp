class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>freq(1e5+1,0),ans;
        vector<bool>valid(1e5,true);
        for(auto x:nums)
        {
            freq[x]++;
        }
        for(auto x:nums)
        {
            if(freq[x]>=2&&valid[x]==true)
            {
                ans.push_back(x);
                valid[x]=false;
            }
        }
        return ans;
    }
};