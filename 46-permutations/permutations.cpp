class Solution {
public:
    void helper(int idx,vector<int> &nums, vector<vector<int>> &res){
        int n=nums.size();
        if(idx==n-1){
            res.push_back(nums);
            return;
        }
        for(int i=idx;i<n;i++){
            swap(nums[idx],nums[i]);
            helper(idx+1,nums,res);
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        helper(0,nums,res);
        return res;

    }
};