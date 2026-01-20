class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int ans=nums.size();
        int mid;
        int start=0;
        int end = n-1;
        while(start<=end)
        {
            mid = start + (end-start)/2;
            if(nums[mid]==target)
            {
              ans=mid;
              break;
            }
            else if (nums[mid]<target)
            start= mid+1;
            else{
            ans = mid;
            end=mid-1;
            }
        }
        return ans;
    }
};