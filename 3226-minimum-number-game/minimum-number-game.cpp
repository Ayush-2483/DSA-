class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i=1;i<nums.size();i+=2){
        //     swap(nums[i],nums[i-1]);
        // }
        // return nums;
        vector<int>arr;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i+=2){
            arr.push_back(nums[i+1]);
            arr.push_back(nums[i]);
        }
        return arr;
    }
};