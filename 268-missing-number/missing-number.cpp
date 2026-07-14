class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int n = nums.size();
        // int TotalSum=(n*(n+1))/2;
        // return TotalSum-accumulate(nums.begin(),nums.end(),0);
        int n = nums.size();
        int rangeXOR=0,arrayXOR=0;
        for(int i=0;i<=n;i++){
            rangeXOR^=i;
        }
        for(int i=0;i<n;i++){
            arrayXOR^=nums[i];
        }
        return rangeXOR^arrayXOR;

    }
};