class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //Ayush Chaurasiya 
        int n = nums.size();
        int i=n-2;
        while(i>=0 && nums[i]>=nums[i+1]){ // first decreasing element nikal rahe hai 
            i--;
        }
        // Wo element find krna hai jo just greater than nums[i] ho
        if(i>=0){
            int j=n-1;
            while(nums[j]<=nums[i]){
                j--;
            }
            swap(nums[i],nums[j]);
        }
        reverse(nums.begin()+i+1,nums.end());
    }
};