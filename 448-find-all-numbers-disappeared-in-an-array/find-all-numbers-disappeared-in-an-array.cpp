class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>freq(1e5+1,0),ans;
        for(auto x:nums)
        {
            freq[x]++;
        }
        for(int i=1;i<nums.size()+1;i++)
        {
            if(freq[i]==0)
            {
                ans.push_back(i);
            }
            
        }
        return ans;
    }
};