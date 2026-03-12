class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool monoInc=true,monoDec=true;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1])
            monoInc=false;
            if(nums[i]<nums[i-1])
            monoDec=false;
        }
        return monoInc || monoDec;
    }
};