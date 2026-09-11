class Solution {
public:
    int dp[2001][2001];
    bool pal[2001][2001];

    int solve(string &s,int i,int j){
        if(i>=j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(pal[i][j]) return dp[i][j]=0;

        int mini=INT_MAX;
        for(int k=i;k<j;k++){
            if(pal[i][k]){
                int right=solve(s,k+1,j);
                mini=min(mini,1+right);
            }
        }
        return dp[i][j]=mini;
    }

    int minCut(string &s){
        int n=s.size();
        memset(dp,-1,sizeof(dp));
        memset(pal,false,sizeof(pal));

        for(int i=n-1;i>=0;i--){
            for(int j=i;j<n;j++){
                if(s[i]==s[j]&&(j-i<=1||pal[i+1][j-1]))
                    pal[i][j]=true;
            }
        }
        return solve(s,0,n-1);
    }
};