class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();
        int countOdd=0,countEven=0;
        for(int x : nums){
            if(x%2==0){
                countEven++;
            }
            else{
                countOdd++;
            }
        }
        vector<int>res(n);
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
                 countOdd--;
                res[i]=countEven;
            }
            else{
                countEven--;
                res[i]=countOdd;
            }
        }
        return res;
    }
};