class Solution {
public:
    int start=1;
    void solve(int n,int k, vector<vector<int>>&ans,vector<int>output,int idx)
    {
        

            
        if(output.size()==k)
        {
            
            ans.push_back(output);
            return;
        }
        
    

        
                for(int a=start;a<=n;a++)
                    {
                
                        output.push_back(a);
                        start=output[idx]+1;
                        solve(n,k,ans,output,idx+1);
                        output.pop_back();
                    }
                    
                
            
                
                        
                
                    
            
    
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        

        
        vector<int>output;
        solve(n,k,ans,output,0);

        return ans;
        
        
    }
};