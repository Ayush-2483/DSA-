class Solution {
public:
    bool outofBound(int x,int y ,int r,int c){
        if(x<0 || y<0 || x>=r || y>=c)
        return false;

        return true;
    }
    int dfs(vector<vector<int>>&matrix,int m,int n,int x,int y,vector<vector<int>>&dp){
        if(dp[x][y]!=0)  return dp[x][y];
        int dirx[]={1,0,-1,0};
        int diry[]={0,1,0,-1};

        dp[x][y]=1;

        for(int i=0;i<4;i++){
            int nx=x+dirx[i];
            int ny=y+diry[i];

            if(outofBound(nx,ny,m,n) && matrix[nx][ny]>matrix[x][y])
            dp[x][y]=max(dp[x][y],1+dfs(matrix,m,n,nx,ny,dp));
        }
        return dp[x][y];
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int maxlen=0;
        vector<vector<int>>dp(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                maxlen=max(maxlen,dfs(matrix,m,n,i,j,dp));
            }
        }
        return maxlen;
    }
};