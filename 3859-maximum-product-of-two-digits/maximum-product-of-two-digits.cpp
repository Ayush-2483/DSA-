class Solution {
public:
    int maxProduct(int n) {
       vector<int>nums;
       while(n>0){
        int digit=n%10;
        nums.push_back(digit);
        n=n/10;
       } 
       sort(nums.begin(),nums.end());
       int p=nums.size();
       return nums[p-1]*nums[p-2];
    }
};