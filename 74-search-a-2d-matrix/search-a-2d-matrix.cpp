class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size(),c=matrix[0].size(),s=0,e=(r*c)-1,m,element;
        
        while(s<=e)
        {
            m=(s+e)/2;
            element=matrix[m/c][m%c];
            if(element==target)
            {
                return 1;
                break;
                  
            
            }
            else if(element<target)
            {
                s=m+1;
            }
            else
            {
                e=m-1;
            }
        }
        return 0;
    }
};