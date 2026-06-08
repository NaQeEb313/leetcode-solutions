class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        vector<int> copy=nums;
        
        nums.insert(nums.end(),copy.begin(),copy.end());
        stack<int>st;
        vector<int> ans(nums.size()/2);

        for(int i=nums.size()-1;i>=0;i--)
        {
            while(!st.empty() && st.top() <= nums[i])
            {
                st.pop();
            }

            if(st.empty() && i < ans.size())
            {
                ans[i]=-1;
            }

            else if(!st.empty() && i< ans.size())
            {
                ans[i]=st.top();
            }

            st.push(nums[i]);
        }
        return ans;
    }
};