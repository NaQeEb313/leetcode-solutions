class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

     int r=0,c=matrix[0].size()-1;

     while(r<matrix.size()&&c>=0)
     {
        int element=matrix[r][c];
        if(element==target)
        {
            return true;
            break;
        }
        else if(element>target)
        {
            c--;
        }
        else if(element<target)
        {
            r++;
        }
        
     }
     return false;
        
    }
};