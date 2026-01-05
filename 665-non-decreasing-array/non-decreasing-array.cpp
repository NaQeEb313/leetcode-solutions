class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        if(n==1)
        {
            return true;
        }
        if(nums[0]>nums[1])
        {
            count++;
            nums[0]=nums[1];
            
        }
        
        for(int i=1;i<n-1;i++)
            {
                if(nums[i]>nums[i+1])
                {
                    count++;
                    if(nums[i+1]>=nums[i-1])
                    {
                        nums[i]=nums[i+1];
                        
                    }
                    else
                    {
                        nums[i+1]=nums[i];
                    }
                  
                }
                
                if(count>1)
                {
                    return false;
                }
                    
                
            }
        
        return true;
    }
};