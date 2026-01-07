class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0,e=nums.size()-1,m,p,n=nums.size()-1;
                while(s<e)
                {
                    m=(s+e)/2;
                    if(nums[m]>nums[e])
                    {
                        s=m+1;
                        
                        
                    }

                    else if(nums[m]<nums[e])
                    {
                        e=m;

                    }
                    else
                    {
                        e--;
                    }
                   p=s;
                }
    s=0,e=nums.size()-1;
    int min;
        if(nums[p]<=nums[0]&&nums[p]<=nums[n])
        {
            min=nums[p];
        }
        else if(nums[p]<=nums[0]&&nums[p]>=nums[n])
        {
            min=nums[n];
        }
       
        else
        {
            min=nums[0];
        }

        return min;
        
        //return s;

    }
};