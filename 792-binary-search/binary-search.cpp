class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1,m,ans=-1;

        while(s<=e)
        {
            m=(s+e)/2;

            if(nums[m]==target)
            {
                ans=m;
                break;
            }

            else if(nums[m]<target)
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