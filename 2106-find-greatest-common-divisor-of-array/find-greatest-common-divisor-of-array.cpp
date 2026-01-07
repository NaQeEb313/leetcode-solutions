class Solution {
public:
    vector<int> factor(int num)
    {
        int divisor=2;
        vector<int> factors;
        int dividend=num;
        for(;dividend!=1;)
            {
                
                if(dividend%divisor==0)
                {
                    dividend = dividend/divisor;
                    factors.push_back(divisor);
                }
                else
                    
                    divisor++;
            }
        return factors;
    }
    int findGCD(vector<int>& nums) {
        int max= *max_element(nums.begin(),nums.end());
        int min =
        *min_element(nums.begin(),nums.end());
        int answer=1;
        vector<int>max_factors=factor(max);
        vector<int>min_factors=factor(min);
        int i=0;
        //vector<bool>maxbool(max_factors.size(),false);
        vector<bool>minbool(min_factors.size(),false);
        vector<int> ans;
        for(auto x:max_factors)
            {
               int j=0; 
                {
                for(auto y:min_factors)
                    {
                        
                        if(y==x&&minbool[j]==false)
                        {
                            ans.push_back(y);
                            minbool[j]=true;
                            break;
                        }
                       // minbool[j]=true;
                        j++;
                    }
                    
                i++;
                }
            }
        for(auto x:ans)
            answer=x*answer;

        return answer;
        

    }
};