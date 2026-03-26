
class Solution {
  public:
    int Ways(int stair , int n , vector<int>&dp){
        if(stair==n) return 1;
        if(stair > n) return 0;
        
        if(dp[stair]!=-1){
            return dp[stair];
        }
        dp[stair]=Ways(stair+1,n,dp)+Ways(stair+2,n,dp)+Ways(stair+3,n,dp);
        
        return dp[stair];
    }
    int countWays(int n) {
    vector<int>dp(n+2,-1);
    return Ways(0,n,dp);
        
        
    }
};
