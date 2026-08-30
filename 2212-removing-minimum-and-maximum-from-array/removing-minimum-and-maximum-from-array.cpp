class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int miniIndex=0,maxiIndex=0;
        for(int i=1;i<n;i++){
            if(nums[i]<nums[miniIndex])
            miniIndex=i;
            if(nums[i]>nums[maxiIndex])
            maxiIndex=i;
        }
        int left=min(miniIndex,maxiIndex);
        int right=max(miniIndex,maxiIndex);
        int front=right+1,back=n-left,both=(left+1)+(n-right);

        return min({front,back,both});
    }
};