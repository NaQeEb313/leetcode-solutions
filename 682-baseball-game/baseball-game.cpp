class Solution {
public:


   int to_int(string num)
   {
    int n=0;
    if(num[0]=='-')
    {
        int j=0;
        for(int i=num.length()-1;i>0;i--)
        {
            
            n=n+((num[i]-'0')*pow(10,j));
            j++;
            
        }
        return -1*n;
    }
    else
    {
         int j=0;
        for(int i=num.length()-1;i>=0;i--)
        {
            
            n=n+((num[i]-'0')*pow(10,j));
            j++;
            
        }
        return n;
    }
   }
   int prev_sum(stack<int> score)
   {
    int sm=0;
    sm=sm+score.top();
    score.pop();
    sm=sm+score.top();

    return sm;
   }

   int prev_double(stack<int> score)
   {
    
    int dble=2*score.top();
    return dble;
   }

    int calPoints(vector<string>& operations) {

        stack<int> score;

        for(auto  x:operations)
        {
            if(!(x[0]=='C') && !(x[0]=='D') && !(x[0]=='+'))
            {
                
                score.push(to_int(x));
            }

            else if(x=="+")
            {
               score.push(prev_sum(score));

            }

            else if(x=="D")
            {
                score.push(prev_double(score));
            }

            else if(x=="C")
            {
                score.pop();
            }
    

            

            
        }
        int score_sum=0;
        while(!score.empty())
            {
                score_sum=score_sum+score.top();
                score.pop();
            }

        return score_sum;
    }
};