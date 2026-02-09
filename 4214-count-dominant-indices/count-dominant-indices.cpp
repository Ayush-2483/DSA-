class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int sum=0,average=0,count=0;
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            sum=accumulate(nums.begin()+i+1,nums.end(),0);
            average=sum/(n-i-1);
            if(nums[i]>average){
                count++;
            }
        }
        return count;

    }
};