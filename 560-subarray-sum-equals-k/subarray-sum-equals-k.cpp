class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int n = nums.size();
       int count=0;
       vector<int>prefix(n);
       prefix[0]=nums[0];
       for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+nums[i];
       } 
       for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int sum=(start==0) ? prefix[end] : prefix[end]-prefix[start-1];
            if(sum==k){
                count++;
            }
        }
       }
       return count;

    }
};