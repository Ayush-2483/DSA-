class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>());
        int tcost=0;
        for(int i=0;i<cost.size();i+=3){
             tcost=tcost+cost[i];
             if(i+1<cost.size())
                tcost+=cost[i+1];

        }
        return tcost;
    }
};