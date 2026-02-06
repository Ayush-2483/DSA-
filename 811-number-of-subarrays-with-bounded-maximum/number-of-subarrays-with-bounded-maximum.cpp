class Solution {
public:
    int countLargest(vector<int>&nums , int k){
        int ans=0,len=0;
        for(int x : nums){
            if(x<=k){
                len++;
            }
            else{
                len=0;
            }
            ans+=len;
        }
        return ans;
    }
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return countLargest(nums,right)-countLargest(nums,left-1);
    }
};