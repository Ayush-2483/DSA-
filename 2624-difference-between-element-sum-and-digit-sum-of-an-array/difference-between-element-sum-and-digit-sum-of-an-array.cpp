class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int totalSum=0;
        for(int x : nums){
            totalSum+=x;
        }
        int n = nums.size();
        int digitSum=0;
        for(int i =0;i<n;i++){
            while(nums[i]>0){
                int n = nums[i]%10;
                digitSum+=n;
                nums[i]=nums[i]/10;
            }
        }
        return totalSum-digitSum;
    }
};