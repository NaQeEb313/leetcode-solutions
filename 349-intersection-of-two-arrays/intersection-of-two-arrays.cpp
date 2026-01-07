class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        vector<int>freq1(1e3+1,0),freq2(1e3+1,0),ans;
        for(auto x:nums1)
        {
            freq1[x]++;
        }
        for(auto x:nums2)
        {
            freq2[x]++;
        }
        for(int i=0;i<freq1.size();i++)
        {
            if(freq1[i]>1)
            {
                freq1[i]=1;
            }
            if(freq2[i]>1)
            {
                freq2[i]=1;
            }
            if(freq1[i]==freq2[i]&&freq1[i]!=0&&freq2[i]!=0)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};