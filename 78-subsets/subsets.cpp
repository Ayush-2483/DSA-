class Solution {
public:
    void allSubset(vector<int>& nums,vector<int> &ans,int i ,vector<vector<int>> &res ){
        int n = nums.size();
        if(i==n){
            res.push_back({ans});
            return ; 
        }
        //Inclusion
        ans.push_back(nums[i]);
        allSubset(nums,ans,i+1,res);
        ans.pop_back(); // backtrack

        //exlusion
        allSubset(nums,ans,i+1,res);



    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>ans;
        allSubset(nums,ans,0,res);

        return res;

    }
};