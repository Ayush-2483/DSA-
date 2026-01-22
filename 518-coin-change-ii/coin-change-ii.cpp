class Solution {
public:
    vector<vector<long long>>dp;

    int solve(vector<int>& coins,int amount,int i){
        if(amount==0) return 1;
        if(i==coins.size() || amount<0)
        return 0;

        if(dp[i][amount]!= -1){
            return dp[i][amount];
        }

        int pick=solve(coins,amount-coins[i],i);
        int notpick=solve(coins,amount,i+1);

        return dp[i][amount]=pick+notpick;
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        dp.assign(n,vector<long long>(amount+1,-1));
        return solve(coins,amount,0);
    }
};