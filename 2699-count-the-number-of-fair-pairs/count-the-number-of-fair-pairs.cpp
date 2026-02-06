class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
       int n=nums.size();
       sort(nums.begin(),nums.end());
       long long countLower=0,countUpper=0;
       int left=0,right=n-1;
       while(left<right){
        if(nums[left]+nums[right]<=upper){
            countUpper+=(right-left);
            left++;

        }else{
            right--;
        }
       }
       left=0,right=n-1;
       while(left<right){
        if(nums[left]+nums[right]<lower){
            countLower+=(right-left);
            left++;
        }
        else{
            right--;
        }

       }
       return countUpper-countLower;

            
        }
        
    };