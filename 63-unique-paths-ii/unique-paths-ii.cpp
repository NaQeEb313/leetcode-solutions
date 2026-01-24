class Solution {
public:
vector<vector<int>>dp;
int solve(int x,int y,vector<vector<int>>& obstacleGrid,int m,int n)
{
    if(x>=m||y>=n) return 0;
if( obstacleGrid[x][y]==1) return 0;
if(x==m-1&&y==n-1) return 1;

if(dp[x][y]!=-1) return dp[x][y];







return dp[x][y]=solve(x+1,y,obstacleGrid,m,n)+solve(x,y+1,obstacleGrid,m,n);


}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(),n=obstacleGrid[0].size();

        dp.assign(m,vector<int>(n,-1));
       return solve(0,0,obstacleGrid,m,n);
        
    }
};