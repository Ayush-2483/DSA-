class Solution {
  public:
  
    int dp[1001][1001];
    int solve(int W, vector<int> &val, vector<int> &wt, int n) {
        if(n==0 || W==0) return 0; //Base case
        
        if(dp[n][W]!=-1){
            return dp[n][W];
        }
        
        if(wt[n-1]<=W){ //Choice diagram
            dp[n][W]=max(
            val[n-1]+solve(W-wt[n-1],val,wt,n-1),//Include
            solve(W,val,wt,n-1)
            );//Exclude
        }
        else {
            dp[n][W]=solve(W,val,wt,n-1);
        }
        return dp[n][W];
    }
    
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        memset(dp,-1,sizeof(dp));
        int n =val.size();
        return solve(W, val, wt, n);
    }
    
};