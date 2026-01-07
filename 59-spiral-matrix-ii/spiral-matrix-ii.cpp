class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int row =n;
        int col= n,sc=0,sr=0,ec=n-1,er=n-1,total=n*n,count=0;
        
        vector<vector<int>>generateMatrix1(row,vector<int>(col,0));

        while(sr<=er&&sc<=ec&&count<total)
        {
            for(int i=sc;i<=ec && count<total;i++)
            {   count++;
                generateMatrix1[sr][i]=count;
                
            }
            sr++;

             for(int i=sr;i<=er && count<total;i++)
            {   count++;
                generateMatrix1[i][ec]=count;
                
            }
            ec--;

             for(int i=ec;i>=sc && count<total;i--)
            {   count++;
                generateMatrix1[er][i]=count;
                
            }
            er--;

             for(int i=er;i>=sr && count<total;i--)
            {   count++;
                generateMatrix1[i][sc]=count;
                
            }
             sc++;

        }
          return generateMatrix1; 
        
    }
};