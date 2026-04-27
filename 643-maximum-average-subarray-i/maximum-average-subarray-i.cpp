class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double WindowSum=0;
        for(int i=0;i<k;i++){
            WindowSum+=nums[i];
        }
        double maxSum=WindowSum;
        for(int i=k;i<n;i++){
            WindowSum+=nums[i];
            WindowSum-=nums[i-k];

            maxSum=max(maxSum,WindowSum);
        }
        return maxSum/k;
    }
};