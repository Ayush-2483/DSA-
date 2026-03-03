class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
       int n = nums.size(); 
       int aliceSingle=0,aliceDouble=0,bobSingle=0,total=0,bobDouble=0;
       for(int x : nums){
        total+=x;
       }
       for(int i=0;i<n;i++){
        if(nums[i]%10==nums[i]){
           aliceSingle+=nums[i];
        }
        else{
            aliceDouble+=nums[i];
        }
       }
       bobSingle=total-aliceSingle;
       bobDouble=total-aliceDouble;

       if(aliceSingle > bobSingle || aliceDouble > bobDouble){
        return true;
       }
       else{
        return false;
       }

    }
};