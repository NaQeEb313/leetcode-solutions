class Solution {
public:
    void solve(int idx,vector<int>candidates,int const target,vector<vector<int>>&ans,vector<int>current,int sum)
    {
        
        if(sum==target)
        {
            ans.push_back(current);
            return;
        
        }
        if(sum>target)
        {
            return;
        }
        int const n= candidates.size();
        for(int i=idx;i<n;i++)
            {
             if(sum<target)   
             {
                 current.push_back(candidates[i]);
                 solve(i,candidates,target,ans,current,sum+candidates[i]);

                 current.pop_back();
             }
            }
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>current;
        solve(0,candidates,target,ans,current,0);

        return ans;
    }
};