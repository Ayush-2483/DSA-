class Solution {
  public:
    int cutRod(vector<int> &price) {
        int N = price.size();
        vector<vector<int>>dp(N+1,vector<int>(N+1));
        for(int i=0;i<N+1;i++){
            for(int j=0;j<N+1;j++){
                if(i==0) dp[i][j]=0;
                
                if(j==0) dp[i][j]=0;
            }
        }
        vector<int>length(N);
        for(int i=0;i<N;i++){
            length[i]=i+1;
        }
        for(int i=1;i<N+1;i++){
            for(int j=1;j<N+1;j++){
                if(length[i-1]<=j){
                    dp[i][j]=max(price[i-1]+dp[i][j-length[i-1]] , dp[i-1][j]);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[N][N];
        
    }
};