class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size(),val=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            int j=i;
            val=prices[i];
            while(j<n){
                if(prices[j]<=prices[i] && j>i){
                    val=prices[i]-prices[j];
                    break;
                }
                j++;
            }
            ans.push_back(val);
        }
        return ans;
        
    }
};