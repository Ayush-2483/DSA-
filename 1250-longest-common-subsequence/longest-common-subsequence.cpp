class Solution {
public:
    int dp[1001][1001];
    int LCS(string &text1 , string &text2 , int n , int m){
        if(n==0 || m==0) return 0;
       
       if(dp[n][m]!= -1) return dp[n][m];

        if(text1[n-1]==text2[m-1]){
            dp[n][m]= 1+LCS(text1,text2,n-1,m-1);
        }
        else{
            dp[n][m]= max(LCS(text1,text2,n,m-1),LCS(text1,text2,n-1,m));
        }
        return dp[n][m];
    }
    int longestCommonSubsequence(string &text1, string &text2) {
        memset(dp, -1,sizeof(dp));
        int n=text1.size(),m=text2.size();
        return LCS(text1,text2,n,m);
    }
};