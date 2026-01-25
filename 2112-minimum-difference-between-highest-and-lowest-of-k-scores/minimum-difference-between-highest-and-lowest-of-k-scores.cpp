class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k==1) return 0;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int minDiff=INT_MAX;
        for(int i=0;i<=n-k;i++){
            int currHigh=nums[i+k-1];
            int currLow=nums[i];
            int currDiff=currHigh-currLow;

            if(currDiff<minDiff)
            minDiff=currDiff;
        
        }
        return minDiff;
    }
};