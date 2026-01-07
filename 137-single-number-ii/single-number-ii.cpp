class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<bool> done(nums.size(),false);
        vector<int> count(nums.size(),1);
        for(int i=0;i<nums.size();i++)
            {
                
                if(done[i]==false)
                {
                    
                for(int j=i+1;j<nums.size();j++)
                    {
                    
                        if(nums[j]==nums[i])
                        {
                            count[i]++;
                            done[j]=true;
                        }
                
                    }
                    
                }    
            }
        int pos;
        for(int i=0;i<nums.size();i++)
            {
                if(done[i]==false&&count[i]==1)
                    {
                    pos=i;
                    }
            }
        return nums[pos];
    }
};