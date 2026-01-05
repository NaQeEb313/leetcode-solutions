class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(2*n,0);
        int j=0;
        for(int i=1;i<2*n;i+=2)
        {
            

         ans[i]=nums[j+n];
         ans[i-1]=nums[j];  
         j++;

        }
        
        return ans;
    }
};