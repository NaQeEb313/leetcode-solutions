class Solution {
public:
 
    void find(vector<int> nums,vector<int>output,int i,vector<vector<int>>&ans){
        
        int n=nums.size();
        if(i==n)
        {
            ans.push_back(output);
            return;
        }
        //exclude
        find(nums,output,i+1,ans);

        //include
        output.push_back(nums[i]);
        find(nums,output,i+1,ans);
        output.pop_back();
        
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>output;
        find(nums,output,0,ans);

        return ans;
    }
};