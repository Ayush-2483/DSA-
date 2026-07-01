class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        long long totalSum=0;
        for(int i=n-1; i>=n-k;i--){
            totalSum+= 1LL*nums[i]*max(1,mul);
            mul--;
           
        }
        return totalSum;

    }
};