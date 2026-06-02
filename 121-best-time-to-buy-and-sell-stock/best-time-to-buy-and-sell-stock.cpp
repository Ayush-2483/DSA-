class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0,minPrices=prices[0];
        for(auto &p : prices){
            minPrices=min(p , minPrices);
            maxProfit=max(maxProfit , p-minPrices);
        }
        return maxProfit;
    }
};