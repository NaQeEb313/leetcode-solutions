class Solution {
public:
    vector<int> nextsmall(vector<int> heights)
    {
        stack<int> st;
        vector<int>ans(heights.size());
        
        for(int i=heights.size()-1;i>=0;i--)
        {
            while(!st.empty() && heights[i] <= heights[st.top()])
            {
                st.pop();
            }

            if(st.empty())
            {
                ans[i]=-1;
            }
            else
            {
                ans[i]=st.top();
            }
            st.push(i);
        }
        return ans;
    }

    vector<int>prevsmall(vector<int>heights)
      {
        stack<int> st;
        vector<int>ans(heights.size());
        
        for(int i=0;i<heights.size();i++)
        {
            while(!st.empty() && heights[i] <= heights[st.top()])
            {
                st.pop();
            }

            if(st.empty())
            {
                ans[i]=-1;
            }
            else
            {
                ans[i]=st.top();
            }
            st.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int> next,prev;

        next=nextsmall(heights);
        prev=prevsmall(heights);

        int mx=INT_MIN;
        
        for(int i=0;i<heights.size();i++)
        {
              int l=heights[i];
              if(next[i]==-1)
              {
                next[i]=heights.size();
              }
              int b= next[i] - prev[i] -1;

              int area= l*b;

              mx=max(area,mx);
        }
        return mx;
    }
};