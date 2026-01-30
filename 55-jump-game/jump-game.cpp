class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxIndex=0,i=0;
        while(i<=maxIndex){
            maxIndex=max(maxIndex,i+nums[i]);
                if(maxIndex>=n-1){
                    return true;
                }
                i++;
        }
        return false;
    }
};