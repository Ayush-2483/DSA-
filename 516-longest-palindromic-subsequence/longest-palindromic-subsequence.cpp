class Solution {
public:
    int dp[1001][1001];
    int solve(string &s1 , string &s2 , int i ,int j){
        if(i<0 || j<0){
            return 0;
        }
        if(dp[i][j]!=-1) return dp[i][j];

        if(s1[i]==s2[j]){
            dp[i][j]= 1+solve(s1,s2,i-1,j-1);
        }
        else{
            dp[i][j]= max(solve(s1,s2,i-1,j),solve(s1,s2,i,j-1));
        }
        return dp[i][j];
    }
    int longestPalindromeSubseq(string s1) {
        memset(dp,-1,sizeof(dp));
        string s2 = s1;
        reverse(s2.begin(),s2.end());
        return solve(s1,s2,s1.size()-1,s2.size()-1);
        
    }
};