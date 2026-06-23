class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int n = costs.size();
        int sum=0,count=0;
       for(int cost : costs){
        if(sum+cost <= coins){
            sum+=cost;
            count++;
        }
        else{
            break;
        }
       }
        return count;
    }
};