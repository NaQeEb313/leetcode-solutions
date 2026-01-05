class Solution {
public:
   
    long long maximumScore(vector<int>& nums) {

        long long presum=0,max=LLONG_MIN;
        int n=nums.size();
        vector<long long>sufmin(n),score(n-1);
        sufmin[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            
            sufmin[i]=min((long long)nums[i],sufmin[i+1]);
        }
        
        for(int i=0;i<n-1;i++)
        {
            presum=presum+nums[i];
            score[i]=presum-sufmin[i+1];

            if(max<score[i])
            {
                max=score[i];
            }

        }
        return max;
    }
};