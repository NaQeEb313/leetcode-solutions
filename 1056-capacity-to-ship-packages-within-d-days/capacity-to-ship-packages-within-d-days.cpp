class Solution {
public:
    bool possible(vector<int>&nums, int days,int m){
        int weightsum=0,n=nums.size(),days_count=1;
        for(int i=0;i<n;i++)
            {
                if(weightsum+nums[i]<=m)
                {
                    weightsum+=nums[i];
                }
                else
                {
                    weightsum=nums[i];
                    days_count++;
                    
                    if(days_count>days||m<nums[i])
                    {
                        return false;
                    }
                }
            }
        return true;
    }
    int shipWithinDays(vector<int>& nums, int days) {
        int s=0,e,sum=0,ans=-1,m,n=nums.size();
        for(int i=0;i<n;i++)
            {
                sum+=nums[i];
            }
        e=sum;
        while(s<=e)
            {
                m=(s+e)/2;
                
                    {
                        if(possible(nums,days,m))
                        {
                            ans=m;
                            e=m-1;
                        }
                        else
                        {
                            s=m+1;
                        }
                        
                    }
            }
        return ans;
    }
};