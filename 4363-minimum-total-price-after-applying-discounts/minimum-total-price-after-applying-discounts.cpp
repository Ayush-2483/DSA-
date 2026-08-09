class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end(),greater<int>());
        sort(discounts.begin(),discounts.end(),greater<int>());

        long long total=0;
        for(int p : prices){
            total+=p;
        }
        long long savings=0;
        int n=min(prices.size(),discounts.size());
        for(int i=0;i<n;i++){
            savings=savings+1LL*prices[i]*discounts[i];
        }
        return total-savings/100.0;
    }
};