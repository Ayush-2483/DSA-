class Solution {
public:
    void dfs(int x,int y,int r,int c,vector<vector<char>>& grid){
        if(x>=r || y>=c || x<0 || y<0 || grid[x][y]=='0')
        return;
        grid[x][y]='0';
        int dirx[]={1,0,-1,0};
        int diry[]={0,-1,0,1};
        for(int i=0;i<4;i++){
            int n_x=dirx[i]+x;
            int n_y=diry[i]+y;
            dfs(n_x, n_y, r, c, grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int Island=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='1')
                {
                    Island++;
                    dfs(i,j,r,c,grid);
                }
            }
        }
        return Island;
    }
};