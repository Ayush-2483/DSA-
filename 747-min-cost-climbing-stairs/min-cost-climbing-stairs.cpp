class Solution {
public:
    // int t[1001];
    // int solve(vector<int>& cost , int i){
    //     if(i>=cost.size()) return 0;

    //     if(t[i]!=-1)  //Memoization
    //     return t[i];

    //     int a = cost[i]+solve(cost,i+1);
    //     int b = cost[i]+solve(cost,i+2);

    //     return t[i]=min(a,b);
    // }
    int minCostClimbingStairs(vector<int>& cost) {
    //     memset(t,-1,sizeof(t));
    //     return min(solve(cost,0),solve(cost,1));

    // Bottom - UP 
    int n = cost.size();
    if(n==2) 
    return min(cost[0],cost[1]);
    for(int i=2;i<n;i++){
        cost[i]=cost[i]+min(cost[i-1],cost[i-2]);
    }
    return min(cost[n-1],cost[n-2]);
    }
};