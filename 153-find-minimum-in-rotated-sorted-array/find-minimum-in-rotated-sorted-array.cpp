class Solution {
public:
    int findMin(vector<int>& nums) {
        //Ayush Chaurasiya
       int n=nums.size();
        int low=0,high=n-1,mid,ans=nums[0];
        while(low<=high){
            mid =low+(high-low)/2;
            if(nums[mid]>=nums[0]){
               low=mid+1; 
            }else {
            ans=nums[mid];
            high=mid-1;
            }
        }
        return ans; 
    }
};