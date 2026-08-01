class Solution {
  public:
    int minDifference(vector<int>& arr) {
        int n = arr.size(),sum=0;
        for(int x : arr){
            sum+=x;
        }
        vector<vector<bool>>dp(n+1,vector<bool>(sum+1));
        for(int i=0;i<n+1;i++){
            dp[i][0]=true;
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(arr[i-1] <= j){
                    dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        int mini=INT_MAX;
        for(int s1=0;s1<=sum/2;s1++){
            if(dp[n][s1]){
            int s2=sum-s1;
            mini=min(mini , abs(s2-s1));
        }
        }
        return mini;
        
        
    }
};
