class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int s=0,e=nums.size()-1,m,k=target;
        vector<int> ans={-1,-1};

        for(;s<=e;)
            {
                m=(s+e)/2;
                if(nums[m]==k)
                {
                    ans[0]=m;
                    e=m-1;
                    
                }
                else if(nums[m]<k)
                {
                    s=m+1;
                    
                }
                else
                {
                    e=m-1;
                }
            }
        s=0,e=nums.size()-1;
        for(;s<=e;)
            {
                m=(s+e)/2;
                if(nums[m]==k)
                {
                    ans[1]=m;
                    s=m+1;
                    
                }
                else if(nums[m]<k)
                {
                    s=m+1;
                    
                }
                else
                {
                  e=m-1;
                }
            }

        return ans;
    }
};