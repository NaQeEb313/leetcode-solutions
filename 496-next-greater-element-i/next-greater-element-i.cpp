class Solution {
public:
vector<int> nextgreaterelement(vector<int> &nums)
{
    stack<int>st;
    vector<int> ans(nums.size());
    for(int i=nums.size()-1;i>=0;i--)
    {
        while(!st.empty() && st.top() <= nums[i])
        {
            st.pop();
        }

        if(st.empty())
            ans[i]=-1;
            

        else ans[i]=st.top();

        st.push(nums[i]); 
    }
    return ans;
}
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int> mp;
        vector<int> ans;

        
        
              ans=nextgreaterelement(nums2);

            for(int i=0;i<nums2.size();i++)
            {
                mp[nums2[i]]=ans[i];
            }
             ans.clear();
            ans.resize(nums1.size());
            for(int i=0;i<nums1.size();i++)
            {
                ans[i]=mp[nums1[i]];
            }
        

        return ans;
    }
};