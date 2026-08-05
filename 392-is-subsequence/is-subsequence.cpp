class Solution {
public:
     int LCS(string &s1, string &s2,int n,int m){
        vector<vector<int>>dp(n+1 , vector<int>(m+1,0));
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]= 1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
        
    }
    bool isSubsequence(string s, string t) {
        // int i=0,j=0;
        // while(i<s.size() && j<t.size()){
        //     if(s[i]==t[j]){
        //         i++;
        //     }
        //     j++;
        // }
        // return i==s.size();
        int n=s.size(),m=t.size();
        int len=LCS(s,t,n,m);

        if(len==s.size()) return true;

        return false;

    }
};