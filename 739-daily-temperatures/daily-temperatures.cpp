class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        stack<int> temp;
        vector<int> ans(temperatures.size());
        
        for(int i= temperatures.size()-1;i>=0;i--)
        {
            
            while(!temp.empty() && temperatures[temp.top()] <= temperatures[i])
            {
                temp.pop();
                
            }

            if(temp.empty())
            {
                ans[i]=0;
            }
            else
            {
                ans[i]=temp.top()-i;
            }
            temp.push(i);
        }
        return ans;
    }
};