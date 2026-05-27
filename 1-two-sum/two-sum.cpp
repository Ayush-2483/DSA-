class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int n = nums.size();
        // int l=0,r=n-1;
        // while(l<r){
        //     if(nums[l]+nums[r]==target){
        //       return {l,r};
        //     }
        //     else if(nums[l]+nums[r]<target){
        //         l++;
        //     }
        //     else{
        //         r--;
        //     }
        // }
        // return {};
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int need=target-nums[i];
            if(mp.count(need)){
                return {mp[need],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};