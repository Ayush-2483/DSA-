class Solution {
public:
    typedef long long ll;
    bool canPartitionGrid(vector<vector<int>>& grid) {
       int n = grid.size() , m=grid[0].size();
       vector<ll>rowSum(n,0),colSum(m,0);
    long long total=0;
       for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
           total+=grid[i][j];
           rowSum[i]+=grid[i][j];
           colSum[j]+=grid[i][j];
        }
       } 
       if(total % 2 !=0)  
       return false;
    //Horizontal split
       ll upper =0;
       for(int i=0;i<n-1;i++){
        upper+=rowSum[i];
        if(upper == total-upper)
        return true;
       }
    //Vertical split
        ll left =0;
       for(int j=0;j<m-1;j++){
        left+=colSum[j];
        if(left == total-left)
        return true;
       }
    return false;
    }
};