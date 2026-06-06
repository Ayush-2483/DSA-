class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //Boyer Moore Voting Algorithm
        int n = nums.size();
        int count1=0,maj1= NULL ,count2=0,maj2=NULL;
        for(int i=0;i<n;i++){
            if(nums[i]==maj1){
                count1++;
            }
            else if(nums[i]==maj2){
                count2++;
            }
            else if(count1==0){
                maj1=nums[i];
                count1=1;
            }
            else if(count2==0){
                maj2=nums[i];
                count2=1;
            }
            else{
                count1--;
                count2--;
            }
        }
        vector<int>res;
        int freq1=0,freq2=0;
       for(int x : nums){
        if(x == maj1){
            freq1++;
        }
        else if(x == maj2){
            freq2++;
        }
    }
     if(freq1 >floor(n/3)){
            res.push_back(maj1);
        }
        if(freq2 >floor(n/3)){
            res.push_back(maj2);
        }
        return  res;

    }
};