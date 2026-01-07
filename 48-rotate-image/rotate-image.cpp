class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int j=0;j<n;j++)
       { int sr=0,sc=0,er=n-1,ec=n-1;
        while(sc<ec)
        {
            
            
            swap(matrix[j][sc],matrix[j][ec]);
            
            sc++;
            ec--;

        
        }
       }
        
        
    }
};