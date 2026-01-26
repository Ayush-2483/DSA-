class Solution {
public:
    int t[1001];
    int solve(vector<int>& cost , int i){
        int n = cost.size();
        if(i>=cost.size()) return 0;

        if(t[i]!=-1)
        return t[i];

        int a = cost[i]+solve(cost,i+1);
        int b = cost[i]+solve(cost,i+2);

        return t[i]=min(a,b);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        memset(t,-1,sizeof(t));
        return min(solve(cost,0),solve(cost,1));
    }
};